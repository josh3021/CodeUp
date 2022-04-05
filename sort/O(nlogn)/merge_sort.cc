#include <stdio.h>

int sorted[10];

void merge(int arr[], int start, int middle, int end) {
  int i = start;
  int j = middle + 1;
  int k = start;

  while(i <= middle && j <= end) {
    if (arr[i] <= arr[j]) {
      sorted[k] = arr[i];
      i++;
    } else {
      sorted[k] = arr[j];
      j++;
    }
    k++;
  }

  if (i > middle) {
    for (int t = j; t <= end; t++) {
      sorted[k] = arr[t];
      k++;
    }
  } else {
    for (int t = i; t <= middle; t++) {
      sorted[k] = arr[t];
      k++;
    }
  }
  for (int t = start; t <= end; t++) {
    arr[t] = sorted[t];
  }
}

void merge_sort(int arr[], int start, int end) {
  if (start < end) {
    int middle = (start + end) / 2;
    merge_sort(arr, start, middle);
    merge_sort(arr, middle+1, end);
    merge(arr, start, middle, end);
  }
}

int main (void ) {
  int arr[10] = {6, 3,4,0, 9 ,1,91 ,2, 8, 77};
  merge_sort(arr, 0, 9);

  for (int i=0; i< 10; i++) {
    printf("%d ", arr[i]);
  }
}