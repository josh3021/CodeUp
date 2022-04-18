#include <stdio.h>

int sorted[10];

void merge(int* arr, int start, int middle, int end) {
  int i = start;
  int j = middle + 1;
  int k = i;

  while (i <= middle && j <= end) {
    if (arr[i] <= arr[j]) {
      sorted[k] = arr[i];
      i++;
    }
    else {
      sorted[k] = arr[j];
      j++;
    }
    k++;
  }

  if (i > middle) {
    while (j <= end) {
      sorted[k] = arr[j];
      j++;
      k++;
    }
  }
  else {
    while(i <= middle) {
      sorted[k] = arr[i];
      i++;
      k++;
    }
  }

  i=0;
  while (i <= end) {
    arr[i] = sorted[i];
    i++;
  }
}

void merge_sort(int* arr, int start, int end) {
  if (start >= end) {
    return;
  }

  int middle = (start + end) / 2;
  merge_sort(arr, start, middle);
  merge_sort(arr, middle + 1, end);
  merge(arr, start, middle, end);
}

int main(void) {
  int arr[10] = {10, 45, 2,4,6, 2, -20, 5,2,6};
  merge_sort(arr, 0, 9);
  for (int i=0; i<10; i++) {
    printf("%d ", sorted[i]);
  }
  return 0;
}
