#include <stdio.h>

int myPow(int base, int degree) {
  int i=0, r=1;
  while (i < degree) {
    r *= base; 
    i++;
  }
  return r;
}

int main(void) {
  int n;
  scanf("%d", &n);
  printf("%d", myPow(2, n)-1);
  return 0;
}