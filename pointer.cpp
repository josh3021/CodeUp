#include <iostream>

using namespace std;


int main (void) {
  int x = 5;
  int* ptr;
  int** ptr_ptr;

  ptr = &x;
  ptr_ptr = &ptr;

  cout << &x << endl;
  cout << &ptr << endl;
  cout << **ptr_ptr;
  return 0;
}