#include <stdio.h>

int main(void) {
  unsigned short m, n, x, y, i, j, rX, rY;
  scanf("%hu %hu %hu %hu", &m, &n, &x, &y);
  short arr[n+1][m+1], max=-1, reduce; 

  for (i=1; i<=n; i++) {
    for (j=1; j<=m; j++) {
      scanf("%hd", &arr[i][j]);
    }
  }

  for (i=y; i<=n; i++) {
    for (j=x; j<=m; j++) {
      reduce = 0;
      for (rY = i; rY > i-y; rY--) {
        for (rX = j; rX > j-x; rX--) {
          reduce += arr[rY][rX];
        }
      }
      if (reduce > max) {
        max = reduce;
      }
    }
  }

  printf("%hd", max);
  return 0;
}