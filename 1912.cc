#include <iostream>

using namespace std;

int f(int n) {
  if (n < 1) {
    return 1;
  }
  return n * f(n-1);
}

int main (void) {
  int n;
  cin >> n;
  int r = f(n);
  cout << r;
  return 0;
}