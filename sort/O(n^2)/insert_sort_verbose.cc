#include <iostream>

int main (void) {
  int i, j, temp;
  int arr[10] = {5, 9, 8, 1, 4, 10, 2, 7, 6, 3};

  for (i=1; i<10; i++) {
    j = i;
    while (arr[j] > arr[j+1]) {
      if (j < 0) {
        break;
      }
      temp = arr[j];
      arr[j] = arr[j + 1];
      arr[j+1] = temp;
      j--;
    }
  }

  for (i=0; i< 10; i++) {
    std::cout << arr[i] << " ";
  }
  return 0;
}