#include <stdio.h>

void int_to_binary(int n) {
  if (n < 1) {
    return;
  }
  int_to_binary(n / 2);
  printf("%d", n%2);
}

int main (void) {
  int n = 0;
  scanf("%d", &n);
  if (n > 0) {
    int_to_binary(n);
  } else {
    printf("%d", 0);
  }
  return 0;
}