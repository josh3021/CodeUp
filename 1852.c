#include <stdio.h>

void r(n) {
  if (n < 1) {
    return;
  }
  r(n-1);
  printf("%u ", n);
}

int main(void) {
  unsigned int n;
  scanf("%u", &n);
  r(n);
  return 0;
}