#include <stdio.h>

int oobak(int n) {
  if (n == 1) {
    return 0;
  }
  if (n%2 == 1) {
    n = 3 * n + 1;
  } else {
    n = n / 2;
  }
  printf("%d\n", n);
  oobak(n);
  return 0;
}

int main(void) {
  int n;
  scanf("%d", &n);
  if (n < 1) {
    return 0;
  }
  printf("%d\n", n);
  oobak(n);
  return 0;
}