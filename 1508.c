#include <stdio.h>

int main(void) {
  int n, i, j;
  scanf("%d", &n);
  int arr[n][n];
  for (i=0; i<n; i++) {
    scanf("%d", &arr[i][0]);
  }

  for (i=0; i<n; i++) {
    for (j=1; j<=i; j++) {
      arr[i][j] = arr[i][j-1] - arr[i-1][j-1];
    }
  }

  for (i=0; i<n; i++) {
    for (j=0; j<=i; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}