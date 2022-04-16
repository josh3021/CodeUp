#include <stdio.h>

int main(void) {
  int n;
  reload:
  scanf("%d", &n);
  if(n!=0) printf("%d\n", n);
  if(n!=0) goto reload;
  return 0;
}