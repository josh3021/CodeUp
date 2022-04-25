#include <stdio.h>

int main(void) {
  unsigned short n[5], i=0, r=0;

  while (i < 5) {
    scanf("%hu", &n[i++]);
  }

  i=0;
  while (i < 5) {
    unsigned short a = n[i];
    r += a * a;
    i++;
  }
  printf("%hu", (unsigned short)(r % 10));
  return 0;
}