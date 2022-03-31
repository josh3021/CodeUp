#include <iostream>

using namespace std;

int main (void) {
  int lottery[7] = {}; // 0 ~ 5까지는 당첨번호 6은 보너스
  int answer[6] = {};
  int a = 0;
  int b = 0;
  int correct = 0;
  bool isBonus = false;

  while (a < 7) {
    cin >> lottery[a];
    a++;
  }

  while (b < 6) {
    cin >> answer[b];
    b++;
  }

  for (int i=0; i < 6; i++) {
    for (int j=0; j < 6; j++) {
      if (answer[j] == lottery[i]) {
        correct++;
      }
    }
  }

  for (int i=0; i< 6; i++) {
    if (lottery[6] == answer[i]) {
      isBonus = true;
    }
  }

  if (correct == 5 && isBonus) {
    cout << 2;
    return 0;
  }

  switch (correct) {
    case 6: cout << 1; break;
    case 5: cout << 3; break;
    case 4: cout << 4; break;
    case 3: cout << 5; break;
    default: cout << 0; break;
  }

  return 0;
}