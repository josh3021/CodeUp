#include <stdio.h>

int getValue(int a, int b, int c, int n) {
  int i=0;
  while (i < n-1) {
    a = a * b + c;
    i++;
  }
  return a;
}

int main(void) {
  int a, b, c, n;
  scanf("%d %d %d %d", &a, &b, &c, &n);
  printf("%d", getValue(a, b, c, n));
  return 0;
}