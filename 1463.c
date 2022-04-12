#include <stdio.h>

int main(void){
  int n;
  scanf("%d", &n);
  int arr[n+1][n+1], count = 1;

  for (int i =1; i <=n; i++) {
    for (int j=n; j>=1; j--) {
      arr[j][i] = count;
      count++;
    }
  }

  for (int i=1; i<=n; i++) {
    for(int j=1; j<=n; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}