#include <stdio.h>

int main(void) {
  unsigned short n, r=0, i=0, nn;
  scanf("%hu", &n);
  while (i<n) {
    scanf("%hu", &nn);
    r+=nn;
    i+=1;
  }
  printf("%hu", r);
  return 0;
}