#include <stdio.h>
#include <string.h>

int findIndex(int *array, size_t size, int target)  {
    int i=0;
    while((i<size) && (array[i] != target)) i++;

    return (i<size) ? (i) : (-1);
}

void sort(int* arr, int n) {
  int storage[n];
  memcpy(storage, arr, sizeof(storage));
  int index = 0;
  int temp;

  for (int i=1; i<n; i++) {
    int j=i;
    while(arr[j] < arr[j+1]) {
      if (j < 0) {
        break;
      }
      temp = arr[j+1];
      arr[j+1] = arr[j];
      arr[j] = temp;
      j--;
    }
  }

  for (int i = 0; i < n; i++) {
    int index = findIndex(storage, sizeof(storage), arr[i]);
    printf("%d ", index);
  }
}

int main(void) {
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i=0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  sort(arr, n);
  return 0;
}