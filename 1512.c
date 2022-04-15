#include <stdio.h>

int main(void) {
  unsigned short n, y, x, i, j;
  scanf("%hu", &n);
  unsigned short arr[n+1][n+1];
  scanf("%hu %hu", &y, &x);

  for (i=1; i<=n; i++) {
    for (j=1; j<=n; j++) {
      arr[i][j] = 1;
    }
  }

  for (i=y-1; i>=1; i--) {
    arr[i][x] += arr[i+1][x];
  }
  for (i=y+1; i<=n; i++) {
    arr[i][x] += arr[i-1][x];
  }

  for (i=1; i<=n; i++) {
    for (j=x-1; j>=1; j--) {
      arr[i][j] += arr[i][j+1];
    }
    for (j=x+1; j<=n; j++) {
      arr[i][j] += arr[i][j-1];
    }
  }

  for (i=1; i<=n; i++, puts("")) {
    for (j=1; j<=n; j++) {
      printf("%d ", arr[i][j]);
    }
  }
  return 0;
}