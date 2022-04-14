#include <stdio.h>

int main(void) {
  int n, i, j, d = 1, cnt = 1; // d가 1일경우, 오른쪽으로 d가 0일경우, 왼쪽으로
  scanf("%d", &n);
  int arr[n][n];

  for (i=0; i<n; i++) {
    if (d == 1) {
      j = 0;
      while (j < n) {
        arr[i][j] = cnt++;
        j++;
      }
    }
    else {
      j = n - 1;
      while (j >= 0) {
        arr[i][j] = cnt++;
        j--;
      }
    }
    d = -d;
  }

  for (i=0; i < n; i++) {
    for (j=n-1; j >= 0; j--) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}