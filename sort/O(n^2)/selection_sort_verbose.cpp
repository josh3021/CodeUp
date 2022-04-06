#include <stdio.h>

// 현재 위치에 들어갈 데이터를 찾아 선택하는 알고리즘
int main (void) {
  // Selection Sort는 시간 복잡도 O(n^2)를 가진 Bubble Sort와 Insert Sort와 함께 가장 대표적인 정렬 알고리즘입니다.
  // 효율이 낮은 배열이지만, 가장 기본적인 정렬 중 하나이니 필수로 알아 두셔야 합니다.

  /*
    i, j: 배열을 반복적으로 iterate하기 위해서 사용;
    min: 최소값을 담는 변수;
    index: 최소값이 있는 위치를 나타내는 변수;
    temp: swap을 하기 위한 임시 변수;
  */
  int i, j, min, index, temp;
  int arr[10] = {5, 9, 8, 1, 4, 10, 2, 7, 6, 3};

  // i로 배열 전체를 순회
  for (i = 0; i < 10; i++) {
    // min은 반복되기 전에 항상 초기화
    min = __INT_MAX__;
    // j는 i부터 배열의 끝까지 순회
    for (j=i; j<10; j++) {
      if (arr[j] < min) {
        // 만약 arr[j]가 기존 min보다 작다면, min을 arr[j]로 재할당, index에는 j의 값을 재할당!
        min = arr[j];
        index = j;
      }
    }
    // swap (arr[i]와 arr[index])
    temp = arr[i];
    arr[i] = min;
    arr[index] = temp;
  }
  // print!
  for (i=0; i< 10; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}