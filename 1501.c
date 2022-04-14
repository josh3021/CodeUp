#include <stdio.h>

int main(void) {
  int n, i, j, cnt = 1;
  scanf("%d", &n);
  int arr[n][n];

  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      printf("%d ", cnt++);
    }
    printf("\n");
  }
  return 0;
}