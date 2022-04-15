#include <stdio.h>

int main(void) {
  int n, i, j, sum, cnt = 1, d = -1;
  scanf("%d", &n);
  int arr[n][n];
  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      arr[i][j] = 0;
    }
  }

  for (sum = n-1; sum <= (n-1)*2; sum++) {
    if (d == 1) {
      for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
          if (sum == i+j)
          arr[i][j] = cnt++;
        }
      }
    }
    else {
      for (i=n-1; i>=0; i--) {
        for (j=0; j<n; j++) {
          if (sum == i+j)
          arr[i][j] = cnt++;
        }
      }
    }
    d *= -1;
  }

  for (i=0; i<n; i++, puts("")) {
    for (j=0; j<n; j++) {
      printf("%d ", arr[i][j]);
    }
  }
  return 0;
}