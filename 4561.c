#include <stdio.h>

#define TOTAL_NUM 7

int main(void) {
  unsigned short n=0, arr[TOTAL_NUM], reducer=0, min=65535;
  while (n < TOTAL_NUM) {
    scanf("%hd", &arr[n]);
    if (arr[n] % 2 == 1) {
      if (min > arr[n]) {
        min = arr[n];
      }
      reducer += arr[n];
    }
    n+=1;
  }
  if (reducer == 0) {
    printf("%d", -1);
  }
  else {
    printf("%hd\n%hd", reducer, min);
  }
  return 0;
}