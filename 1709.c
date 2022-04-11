#include <stdio.h>

int* sort(int* arr, int length) {
  int i, j, temp;
  int n=0;
  for (i=1; i<length; i++) {
    for (j=0; j<i; j++) {
      if (arr[j] < arr[i]) {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        n++;
      }
    }
  }
  return arr;
}

int main(void) {
  int n;
  scanf("%d", &n);

  int arr[n], i=0;
  while(i<n) {
    scanf("%d", &arr[i]);
    i++;
  }
  sort(arr, n);
  i=0;
  while(i<n) {
    printf("%d ", arr[i]);
    i++;
  }

  return 0;
}