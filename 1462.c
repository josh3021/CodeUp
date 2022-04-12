#include <stdio.h>

int main(void) {
  unsigned int n;
  scanf("%u", &n);
  int arr[n+1][n+1];
  int m=1;

  for (int i=1; i<=n; i++) {
    for (int j=1; j<=n; j++) {
      arr[j][i] = m;
      m++;
    }
  }

  for (int i=1; i<=n; i++) {
    for (int j=1; j<=n; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}