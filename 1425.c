#include <stdio.h>

void sort(int* arr, int n) {
  int temp;
  for (int i=2; i<=n; i++) {
    int j=i-1;
    while (arr[j] > arr[j+1] && j >= 1 ) {
      temp = arr[j];
      arr[j] = arr[j+1];
      arr[j+1] = temp;
      j--;
    }
  }
}

int main(void) {
  int n, c;
  scanf("%d %d", &n, &c);

  int arr[n + 1];

  for (int i=1; i<=n; i++) {
    scanf("%d", &arr[i]);
  }
  sort(arr, n);
  for (int i=1; i<=n; i++) {
    printf("%d ", arr[i]);
    if (i % c == 0 && i != 0) {
      printf("\n");
    }
  }
  return 0;
}