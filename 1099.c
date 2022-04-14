#include <stdio.h>

#define MAX_X 10
#define MAX_Y 10

struct Location {
  unsigned short x;
  unsigned short y;
};

int main(void) {
  unsigned short ground[MAX_Y][MAX_X] = {0}, i, j;
  struct Location food, ant;
  ant.x = 1;
  ant.y = 1;
  for (i=0; i<MAX_Y; i++) {
    for (j=0; j<MAX_X; j++) {
      scanf("%hu", &ground[i][j]);
      if (ground[i][j] == 2) {
        food.y = i;
        food.x = j;
      }
    }
  }

  while (1) {
    ground[ant.y][ant.x] = 9;
    if (ant.y == food.y && ant.x == food.x) {
      break;
    }
    if (ground[ant.y+1][ant.x] == 1 && ground[ant.y][ant.x+1] == 1) {
      break;
    }
    if (ground[ant.y][ant.x+1] != 1) {
      ant.x+=1;
    }
     else if (ground[ant.y+1][ant.x] != 1) {
      ant.y+=1;
    }
    else {
      break;
    }
  }

  for (i=0; i<MAX_Y; i++) {
    for (j=0; j<MAX_X; j++) {
      printf("%hu ", ground[i][j]);
    }
    printf("\n");
  }
  return 0;
}