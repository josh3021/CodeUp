#include <stdio.h>

int main(void) {
  int h, w, n;

  scanf("%d %d", &h, &w);
  int arr[100][100] = {0,};
  scanf("%d", &n);

  int l[n], d[n], x[n], y[n]; // x가 세로 y가 가로
  for (int i=0; i<n; i++) {
    scanf("%d %d %d %d", &l[i], &d[i], &x[i], &y[i]);
  }

  int nn=0;
  while(nn < n) {
    if(d[nn] == 0) //가로 즉 y가 증가
    {
      for (int current_y = y[nn]; current_y < y[nn] + l[nn]; current_y++) {
        arr[x[nn]][current_y] = 1;
      }
    }
    else 
    {
      for (int current_x = x[nn]; current_x < x[nn] + l[nn]; current_x++) {
        arr[current_x][y[nn]] = 1;
      }
    }
    nn++;
  }

  for (int i=1; i<=h; i++) {
    for (int j=1; j <=w; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}