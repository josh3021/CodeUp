#include <stdio.h>

void printBinary(short n) {
  if (n <= 0) {
    return;
  }
  printBinary(n/2);
  printf("%hd", n % 2);
}

int main(void) {
  short n;
  scanf("%hd", &n);

  printf("2 ");
  printBinary(n);
  printf("\n8 %o", n);
  printf("\n16 %X", n);
  return 0;
}