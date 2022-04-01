#include <iostream>

using namespace std;

int main (void) {
  int n = 0;
  cin >> n;

  for (int i=0; i < n; i +=1) {
    for (int j=0; j < n; j+=1) {
      cout << "*";
    }
    cout << '\n';
  }
}