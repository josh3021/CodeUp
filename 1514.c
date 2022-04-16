#include <stdio.h>

struct Spliter {
  unsigned short x;
  unsigned short y;
};

int main(void) {
  unsigned short board[8][8], i, j, k;
  struct Spliter spliters[3];

  for (i=1; i<=7; i++) {
    for (j=1; j<=7; j++) {
      board[i][j] = 0;
    }
  }

  for (i=0; i<=2; i++) {
    scanf("%hu %hu", &spliters[i].y, &spliters[i].x);
  }


  for (k = 0; k <= 2; k++) {
    for (i=1; i<=7; i++) {
      board[spliters[k].y][i] = 1;
    }
    for (i=1; i<=7; i++) {
      board[i][spliters[k].x] = 1;
    }
  }

  for (i=0; i<=2; i++) {
    board[spliters[i].y][spliters[i].x] = 2;
  }

  for (i=1; i<=7; i++, puts("")) {
    for (j=1; j<=7; j++) {
      printf("%hu ", board[i][j]);
    }
  }
  return 0;
}