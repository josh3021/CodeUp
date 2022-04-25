#include <stdio.h>

int main(void) {
  unsigned short n, m, s=0, b=1;
  scanf("%hu", &n);
  for (unsigned short i=0; i<n; i++) {
    scanf("%hu", &m);
    if (m == 0) {
      b = 1;
    }
    else {
      s += b++;
    }
  }
  printf("%hu", s);
  return 0;
}