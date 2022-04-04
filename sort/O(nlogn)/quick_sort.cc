#include <stdio.h>

void quick_sort(int *data, int start, int end) {
  if (start >= end) {
    return;
  }

  int pivot = start;
  int i = start + 1;
  int j = end;
  int temp;
  while (i <= j) { // 엇갈릴때 까지 반복, i > j라면 빠져나옴.
    while(data[pivot] >= data[i]) {
      i += 1;
    }
    while(data[pivot] <= data[j] && j > start) {
      j -= 1;
    }
    if (i <= j) {
      // data[i]와 data[j]끼리 바꾼다
      temp = data[i];
      data[i] = data[j];
      data[j] = temp;
    } else {
      // data[j]와 data[pivot]끼리 바꾼다.
      temp = data[pivot];
      data[pivot] = data[j];
      data[j] = temp;
    }
  }

  quick_sort(data, start, j - 1);
  quick_sort(data, j + 1, end);
}

int main(void) {
  int n, i;
  scanf("%d", &n);
  int arr[n];

  for (i = 0; i < n; i += 1) {
    scanf("%d", &arr[i]);
  }

  quick_sort(arr, 0, n - 1);

  for (i = 0; i < n; i += 1) {
    printf("%d ", arr[i]);
  }
  return 0;
}