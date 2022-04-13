#include <stdio.h>

int main(void) {
  int n, m, sum = 1; // n: 행, m: 열
  scanf("%d %d", &n, &m);
  int arr[n][m];

  for (int k=0; k < n+m-1; k++) {
    for (int j=0; j<m; j++) {
      for (int i=0; i<n; i++) {
        if (i+j == k) {
          arr[i][j] = sum++;
        }
      }
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}