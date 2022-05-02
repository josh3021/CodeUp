#include <stdio.h>

int gcd(int a, int b) {
  if (a > b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
  }

  int n = b%a;
  if (n == 0) {
    return a;
  }
  return gcd(n, a);
}

int main(void) {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  int g1 = gcd(a, b);
  int r=gcd(c, g1);
  printf("%d", r);
  return 0;
}