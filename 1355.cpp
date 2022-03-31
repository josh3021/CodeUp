#include <iostream>

using namespace std;

int main (void){
  int n = 0;
  cin >> n;

  for (int i = n; i > 0; i--) {
    for (int l = i; l < n; l++) {
      cout << " ";
    }
    for (int j = i; j > 0; j--) {
      cout << "*";
    }
    cout << '\n';
  }
  return 0;
}