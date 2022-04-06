#include <iostream>

// 기존 정렬된 배열 사이에 새로운 원소를 올바른 자리에 찾아 삽입하는 정렬
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