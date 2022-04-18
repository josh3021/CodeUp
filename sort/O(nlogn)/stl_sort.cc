#include <iostream>
#include <algorithm>

int main(void) {
  int arr[10] = {9, 4, 8 ,5,101 ,2,4, 56, 90, -1};
  std::sort(arr, arr+10);
  for (int i = 0; i< 10; i++) {
    std::cout << arr[i] << std::endl;
  }
  return 0;
}