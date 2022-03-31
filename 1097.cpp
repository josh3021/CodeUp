#include <iostream>

using namespace std;

int main(void) {
  int board[19][19] = {};
  int n;

  for (int i = 0; i < 19; i += 1) {
    for (int j = 0; j < 19; j += 1) {
      cin >> board[i][j]; // 입력받아서 보드에 그대로 옮기기
    }
  }

  cin >> n; // 뒤집는 갯수 입력
  for (int flip = 0; flip < n; flip += 1) {
    int x_target, y_target;
    cin >> x_target >> y_target; // xn, yn 입력

    x_target -= 1;
    y_target -= 1;

    for (int x = 0; x < 19; x += 1) {
      if (board[x][y_target] == 0) {
        board[x][y_target] = 1;
      } 
      else {
        board[x][y_target] = 0;
      }
    } // x좌표의 바둑돌 넘기기

    for (int y = 0; y < 19; y += 1) {
      if (board[x_target][y] == 0) {
        board[x_target][y] = 1;
      } 
      else {
        board[x_target][y] = 0;
      }
    } // y좌표의 바둑돌 넘기기
  }
  for (int i = 0; i < 19; i += 1) {
    for (int j = 0; j < 19; j += 1) {
      cout << board[i][j]; // 입력받아서 보드에 그대로 옮기기
      if (j != 18) {
        cout << ' ';
      }
    }
    cout << '\n';
  }
  return 0;
}

