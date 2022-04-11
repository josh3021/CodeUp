#include <iostream>
#include <string>
#include <regex>

using namespace std;

string frames[10];

void parse_frame(string s) {
  int i = 0;
  for (int it = 0; it < s.length(); it++) {
    if (i == 9) {
      frames[i] = s.substr(it);
      break;
    }
    frames[i] = s.substr(it, 2);
    it++;
    i++;
  }
}

string get_first_string(string frame) {
  return frame.substr(0, 1);
}

string get_second_string(string frame) {
  return frame.substr(1, 1);
}

int get_bonus(char type, int index){
  int bonus = 0;
  switch (type)
  {
    case 's': {
      string first_bonus = get_first_string(frames[index]);
      if (first_bonus == "S") {
        // S S
        string second_bonus;
        if (index <= 8) {
          second_bonus = get_first_string(frames[index + 1]); // 9번일때 문제
        } else {
          second_bonus = get_second_string(frames[index]);
        }
        if (second_bonus == "S") {
          // S S S
          bonus += 20;
        } else {
          // S S N
          bonus += 10;
          bonus += stoi(second_bonus);
        }
      } else {
        // N ?
        string second_bonus = get_second_string(frames[index]);
        if (second_bonus == "P") {
          // N P
          bonus += 10;
        } else {
          // N N
          bonus += stoi(first_bonus);
          bonus += stoi(second_bonus);
        }
      }
      break;
    }
    case 'p': {
      string first_bonus = get_first_string(frames[index]);
      if (first_bonus == "S") {
        bonus += 10;
      } else {
        bonus += stoi(first_bonus);
      }
      break;
    }
  }
  return bonus;
}

int calc_score(string frame, int index) {
  int score = 0;
  string first_string = get_first_string(frame);
  
  if (first_string == "S") {
    score += 10;
    // 다음 친 거는 다음 프레임
    int bonus = get_bonus('s', index + 1);
    score += bonus;
  } else {
    string second_string = get_second_string(frame);
    if (second_string == "P") {
      score += 10;
      // 다음 친 거는 다음 프레임
      int bonus = get_bonus('p', index + 1);
      score += bonus;
    }
    else {
      score += stoi(first_string);
      score += stoi(second_string);
    }
  }

  return score;
}

int calc_last_score() {
  int score = 0;
  for (int i=0; i<frames[9].length(); i++) {
    if (frames[9][i] == 'S') {
      score += 10;
    }
    else if (frames[9][i] == 'P') {
      score += (10 - (frames[9][i-1] - '0'));
    }
    else {
      score += (frames[9][i] - '0');
    }
  }
  cout << score;
  return score;
}

int calc_frame() {
  int total_score = 0;
  for (int i=0; i<9; i++) {
    int score = calc_score(frames[i], i);
    total_score += score;
  }
  int score = calc_last_score();
  total_score += score;
  cout << total_score;
  return 0;
}

int main(void) {
  string s;
  cin >> s;
  parse_frame(s);
  // calc_frame();
  return 0;
}