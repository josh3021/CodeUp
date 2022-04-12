#include <stdio.h>

int main (void) {
  char n[5000];
  char *p;
  scanf("%s", n);

  p = n;

  int i=0, result = 0;
  while(p[i]) {
    result += p[i] - '0';
    i++;
  }
  if (result % 3 == 0) {
    printf("1");
  }
  else {
    printf("0");
  }
  return 0; 
}