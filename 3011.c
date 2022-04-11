#include <stdio.h>

int bubble_sort(int* arr, int n) {
  int temp;
  int step = 0;
  int swap;
  for (int i=0; i<n; i++) {
    swap = 0;
    for (int j=0; j<n-i-1; j++) {
      if (arr[j] > arr[j+1]) {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        swap = 1;
      }
    }
    if (swap == 1) {
      step +=1;
    }
  }
  return step;
}

int main (void) {
  int n;
  scanf("%d", &n);

  int arr[n], i=0;
  while(i < n) {
    scanf("%d", &arr[i]);
    i++;
  }
  int step = bubble_sort(arr, n);
  printf("%d", step);

  return 0;
}