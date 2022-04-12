#include <stdio.h>

int main(void) {
  int n, m;
  scanf("%d %d", &n, &m);
  int arr[n][m], count=1;

  for (int i=n-1; i>=0; i--) {
    for (int j=0; j<m; j++) {
      arr[i][j] = count;
      count++;
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