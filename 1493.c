#include <stdio.h>

int main(void) {
  int n, m, i, j, r_i, r_j;
  scanf("%d %d", &n, &m);
  int arr[n][m], result[n][m];

  for (i=0; i<n; i++) {
    for (j=0; j<m; j++) {
      result[i][j] = 0;
    }
  }

  for (i=0; i<n; i++) {
    for (j=0; j<m; j++) {
      scanf("%d", &arr[i][j]);
      for (r_i = 0; r_i <= i; r_i++) {
        for (r_j = 0; r_j <= j; r_j++) {
          result[i][j] += arr[r_i][r_j];
        }
      }
    }
  }

  for (i=0; i<n; i++) {
    for (j=0; j<m; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }
  return 0;
}