#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int arr[n][n], r=1, count = 1; // r이 1이면 오른쪽으로, r이 0이면 왼쪽으로

  for (int i=0; i<n; i++) {
    if (r == 1) {
      for (int j=0; j<n; j++) {
        arr[i][j] = count;
        count++;
      }
      r = 0;
    }
    else {
      for (int j=n-1; j>=0; j--) {
        arr[i][j] = count;
        count++;
      }
      r = 1;
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}