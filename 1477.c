#include <stdio.h>

int main(void) {
  int n, m, i, j, k, cnt = 1;
  scanf("%d %d", &n, &m);
  int arr[n][m];

  for (k=0; k<m+n; k+=1) {
    for (i=0; i<n; i+=1) {
      for (j=0; j<m; j+=1) {
        if (i+j == k) {
          arr[i][j] = cnt;
          cnt += 1;
        }
      }
    } 
  }

  for (i=0; i<n; i+=1) {
    for (j=0; j<m; j+=1) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}