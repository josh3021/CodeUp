#include <iostream>

using namespace std;

int main (void) {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i ++) {
    if (i % 3 == 0) {
      continue;
    }
    cout << i << " ";
  }
  return 0;
}