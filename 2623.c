#include <stdio.h>

unsigned short get_gcd(unsigned short small, unsigned short big) {
  unsigned short remainder = big % small;
  if (remainder == 0) {
    return small;
  }
  return get_gcd(remainder, small);
}

int main(void) {
  unsigned short a, b;
  scanf("%hu %hu", &a, &b);
  printf("%d", a <= b ? get_gcd(a, b) : get_gcd(b, a));
  return 0;
}