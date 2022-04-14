#include <stdio.h>

int main(void) {
  int n, m;
  scanf("%d %d", &n ,&m);
  int arr[100][100];

  int x = -1, y = 0, cnt = 1, add = 1, copy_n = n, copy_m = m;
  while (copy_n > 0 && copy_m > 0) {
    for (int i=x; i<copy_m; i++) {
      printf("x: %d, y: %d\n", x, y);
      x += add;
      arr[y][x] = cnt++;
    }
    copy_m--;
    x--;
    y++;
    for (int i=y; i<copy_n; i++) {
      y += add;
      arr[y][x] = cnt++;
    }
    add *= -1;
    copy_n--;
  }

  for (x=0; x<n; x++) {
    for (y=0; y<m; y++) {
      printf("%d ", arr[x][y]);
    }
    printf("\n");
  }
  return 0;
}