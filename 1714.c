#include <stdio.h>

void print_back(unsigned int s, unsigned int n) {
  unsigned short quotient = s / n;
  unsigned short remainder = s % n;
  printf("%hu", remainder);
  if (quotient != 0) {
    print_back(s / 10, n);
  }
}

int main(void) {
  unsigned int s;
  scanf("%u", &s);
  print_back(s, 10);
  return 0;
}