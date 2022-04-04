#include <iostream>

void bubble_sort_asc (void) {
  // Bubble Sort는 시간 복잡도 O(n^2)를 가진 Selection Sort와 Insert Sort와 함께 가장 대표적인 정렬 알고리즘입니다.
  // 최악 효율의 정렬방법이지만, 가장 기본적인 정렬 중 하나이니 필수로 알아 두셔야 합니다.

  int temp;
  int arr[10] = {5, 9, 8, 1, 4, 10, 2, 7, 6, 3};

  // i는 처음부터 배열의 마지막 원소까지 반복합니다.
  for (int i=0; i<10; i++) {
    // j는 가장 마지막의 원소의 index전까지 반복합니다.
    for (int j=0; j < (10 - 1) - i; j++) {
      // 만약 arr[j]가 바로 뒤의 원소보다 크다면 서로 swap해줍니다. (arr[j]는 arr[j+1]보다 작게 되도록 정렬해야합니다.(ASC 기준))
      if (arr[j] > arr[j+1]) {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }

  // print!
  for (int i = 0; i<10; i++) {
    std::cout << arr[i] << " ";
  }
}

// DESC
void bubble_sort_desc(void) {
  int temp;
  int arr[10] = {5, 9, 8, 1, 4, 10, 2, 7, 6, 3};

  for (int i=0; i<10; i++) {
    for (int j=0; j< (10-1)-i; j++) {
      if (arr[j] < arr[j+1]) {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }

  for (int i=0; i< 10; i++) {
    std::cout << arr[i] << " ";
  }
}

int main (void) {
  bubble_sort_asc();
  std::cout << std::endl;
  bubble_sort_desc();
}