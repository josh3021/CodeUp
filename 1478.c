#include <stdio.h>

int main(void) {
  int n, m, k, i, j, cnt = 1;
  scanf("%d %d", &n, &m);
  int arr[n][m];

  for (k = 0; k<m+n; k++) {
    for (i=0; i<n; i++) {
      for (j=0; j<m; j++) {
        if (i+j == k) {
          arr[i][j] = cnt++;
        }
      }
    }
  }
  for (i=0; i<n; i++) {
    for (j=m-1; j>=0; j--) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}