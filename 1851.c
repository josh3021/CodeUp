#include <stdio.h>

void r (unsigned short n) {
  if (n < 1) {
    return;
  }
  printf("*");
  r(n-1);
}

int main(void) {
  unsigned short n;
  scanf("%hu", &n);
  r(n);
  return 0;
}