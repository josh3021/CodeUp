#include <stdio.h>

int main(void) {
  unsigned int n, i;
  scanf("%u", &n);

  for (i=2; i<n; i++) {
    if (n % i == 0) {
      printf("not prime");
      return 0;
    }
  }
  printf("prime");
  return 0;
}