#include <iostream>

using namespace std;

void quick_sort(int* arr, int start, int end) {
  if (start > end) return;
  int temp;
  int pivot = start;
  int i=start;
  int j=end;

  while (i<=j) {
    while(arr[i] <= arr[pivot]) {
      i++;
    }
    while(arr[j] >= arr[pivot] && j > pivot) {
      j--;
    }

    if (i <= j) {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    } else {
      temp = arr[j];
      arr[j] = arr[pivot];
      arr[pivot] =temp;
    }
  }
  quick_sort(arr, start, j-1);
  quick_sort(arr, j+1, end);
}

int main(void) {
  int i=0, arr[5];
  while (i < 5) {
    scanf("%d", &arr[i++]);
  }
  quick_sort(arr, 0, 4);
  i=0;
  printf("%d", arr[2]);
  return 0;
}