#include <stdio.h>

int main(void) {
  unsigned short n, i, j;
  scanf("%hu", &n);
  for (i=0; i<n; i++, puts("**")) {
    for (j=0; j<i; j++) {
      printf(" ");
    }
  }
  return 0;
}