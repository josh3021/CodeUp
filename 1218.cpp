#include <iostream>

using namespace std;

int main (void) {
  int a, b, c = 0;
  cin >> a >> b >> c;

  if (a == c) {
    cout << "정삼각형";
  }
  else if (a + b > c) {
    if (a == b || b == c) {
      cout << "이등변삼각형";
    } else if (a * a + b * b == c * c) {
      cout << "직각삼각형";
    } else {
      cout << "삼각형";
    }
  } else {
    cout << "삼각형아님";
  }
  return 0;
}