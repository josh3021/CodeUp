#include <stdio.h>

int main(void) {
  int n, i, j, cnt = 1, reduce = 0;
  scanf("%d", &n);
  int arr[n][n];

  for (i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      arr[i][j] = cnt++;
      if ((i==0 || i==n-1) || (j==0 || j==n-1)) {
        reduce += arr[i][j];
      }
    }
  }

  printf("%d", reduce);
}