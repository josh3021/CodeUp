#include <stdio.h>

int main(void) {
  unsigned short n, board[19][19] = {0,}, x, y, i;
  scanf("%hu", &n);
  for (i=0; i<n; i++) {
    scanf("%hu %hu", &x, &y);
    board[x-1][y-1] = 1;
  }

  for (i=0; i<19; i++) {
    for (int j=0; j<19; j++) {
      printf("%hu ", board[i][j]);
    }
    printf("\n");
  }
  return 0;
}