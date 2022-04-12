#include <stdio.h>

void printBinary(int n) {
  if(n <= 0) {
    return;
  }
  printBinary(n/2);
  printf("%u", n %2);
}

int main (void) {
  int n;
  scanf("%d", &n);
  if (n <= 0) {
    printf("%d", n);
  } else {
    printBinary(n);
  }
  return 0;
}