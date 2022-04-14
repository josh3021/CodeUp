#include <stdio.h>

int main(void) {
  unsigned short arr[101][101] = {0}, i, x1, y1, x2, y2, x, y, cnt=0;

  for (i=0; i<4; i++) {
    scanf("%hu %hu %hu %hu", &x1, &y1, &x2, &y2);
    for (x = x1; x < x2; x++) {
      for (y = y1; y < y2; y++) {
        arr[x][y] = 1;
      }
    }
  }

  for (x=1; x<=100; x++) {
    for (y=1; y<=100; y++) {
      // printf("%hu ", arr[x][y]);
      if (arr[x][y] == 1) {
        cnt += 1;
      }
    }
    // printf("\n");
  }
  printf("%hu", cnt);
  return 0;
}