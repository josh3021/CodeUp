#include <iostream>

using namespace std;

bool compare(int a, int b) {
  if (a > b) {
    return true;
  }
  return false;
}

void swap(int* a, int* b, int* temp) {
  temp = a;
  a = b;
  b = temp;
}

int main (void) {
  int x, y, z, temp, min;
  cin >> x >> y >> z;
  
  if (compare(y, z)) {
    swap(y, z);
  }

  if (compare(x, y)) {
    swap(x, y);
  }

  if (compare(y, z)) {
    swap(y, z);
  }

  cout << x << " " << y << " "<< z;
  return 0;
}