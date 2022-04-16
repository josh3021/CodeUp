#include <stdio.h>

int f(unsigned short n) {
  if (n == 1) {
    return n;
  }
  return n*f(n-1);
}

int main(void) {
  unsigned short n;
  scanf("%hu", &n);
  printf("%d", f(n));
  return 0;
}