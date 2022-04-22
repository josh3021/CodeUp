#include <iostream>

using namespace std;

int main(void) {
  int i=0, arr[7], odd_max = 0, even_max = 0;
  while(i<7) {
    cin >> arr[i++];
  }
  i=0;


  while(i<7) {
    if (arr[i] % 2 == 1) {
      if (odd_max < arr[i]) {
        odd_max = arr[i];
      }
    }
    else {
      if (even_max < arr[i]) {
        even_max = arr[i];
      }
    }
    i++;
  }

  cout << odd_max + even_max;
  return 0;
}