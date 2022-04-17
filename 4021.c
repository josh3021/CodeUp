#include <stdio.h>

int addOdd(int n) {
  if (n%2==0) {
    return 0;
  }
  return n;
}

int main(void) {
  int i, r=0;
  int arr[7];
  for (i=0; i<7; i++) {
    scanf("%d", &arr[i]);
  }

  for (i=0; i<7; i++) {
    r += addOdd(arr[i]);
  }
    if (r == 0) {
      printf("%d", -1);
    } else {
    printf("%d", r);
    }
  return 0;
}