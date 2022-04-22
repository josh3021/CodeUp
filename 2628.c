#include <stdio.h>

void swap(unsigned short* small, unsigned short* big) {
  unsigned short* temp;
  if (small > big) {
    temp = small;
    small = big;
    big = temp;
  }
}

int main(void) {
  unsigned short a1, a2, b1, b2;
  scanf("%hu %hu %hu %hu", &a1, &a2, &b1, &b2);

  swap(&a1, &a2);
  swap(&b1, &b2);

  if (a1 > b1 && a1 < b2 && a2 > b2) {
    printf("cross");
  } else if (b1 > a1 && b1 < a2 && b2 > a2) {
    printf("cross");
  }
  else {
    printf("not cross");
  }
  
  return 0;
}