#include <stdio.h>

void oobak_reverse(int n) {
  if (n == 1) {
    return;
  }
  if (n%2 == 1) {
    n = 3 * n + 1;
  } else {
    n = n / 2;
  }
  oobak_reverse(n);
  printf("%d\n", n);
}

int main(void) {
  int n;
  scanf("%d", &n);
  if (n < 1) {
    return 0;
  }
  oobak_reverse(n);
  printf("%d\n", n);
  return 0;
}