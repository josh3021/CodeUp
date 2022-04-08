#include <stdio.h>

void quick_sort(int *arr, int start, int end) {
  if (start > end) {
    return;
  }
  int pivot = start;
  int i = start + 1;
  int j = end;
  int temp;

  while(i <= j) {

    while (arr[i] <= arr[pivot]) {
      i += 1;
    }
    while (arr[j] >= arr[pivot] && j > start) {
      j -= 1;
    }

    if (i <= j) {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    } else {
      temp = arr[j];
      arr[j] = arr[pivot];
      arr[pivot] = temp;
    }
  }
  quick_sort(arr, start, j-1);
  quick_sort(arr, j+1, end);
}

int main (void) {
  int n;
  int i = 0;
  scanf("%d", &n);

  int arr[n];
  while(i < n) {
    scanf("%d", &arr[i]);
    i += 1;
  }

  quick_sort(arr, 0, n-1);
  i=0;
  while(i < n) {
    printf("%d\n", arr[i]);
    i += 1;
  }
  return 0;
}