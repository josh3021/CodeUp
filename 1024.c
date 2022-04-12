#include <stdio.h>

int main(void) {
  char c[20];
  scanf("%s", c);

  int i=0;
  while(c[i] != '\0') {
    printf("\'%c\'\n", c[i]);
    i++;
  }
  return 0;
}