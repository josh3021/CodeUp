#include <stdio.h>

int main(void) {
  unsigned short n, i=0;
  scanf("%hu", &n);
  unsigned short arr[n];

  while (i < n) {
    scanf("%hu", &arr[i++]);
  }
  while(i > 0) {
    printf("%hu ", arr[--i]);
  }
  return 0;
}