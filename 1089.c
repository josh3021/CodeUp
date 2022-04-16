#include <stdio.h>

int main(void) {
  unsigned int a;
  unsigned short d, n, i=1;

  scanf("%u %hu %hu", &a, &d, &n);
  for (;i<n;i++) {
    a += d;
  }
  printf("%u", a);
  return 0;
}