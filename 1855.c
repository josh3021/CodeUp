#include <stdio.h>


int r (int n) {
  if (n <= 2) {
    return 1;
  }
  return r(n-1) + r(n-2);
}

int main(void) {
  int n, i=1;
  scanf("%d", &n);
  printf("%d", r(n));
  return 0;
}