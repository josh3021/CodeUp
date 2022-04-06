#include <iostream>

using namespace std;

void printByR(int i, int n) {
  if (i > n) {
    return;
  }
  cout << i << endl;
  printByR(i+1, n);
}

int main(void) {
  int n = 0;
  cin >> n;
  printByR(1, n);
}