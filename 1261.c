#include <stdio.h>

int main(void) {
  int n;
  for (int i=0; i<10; i++) {
    scanf("%d", &n);
    if (n % 5 == 0) {
      printf("%d", n);
      return 0;
    }
  }
  printf("%d", 0);
  return 0;
}