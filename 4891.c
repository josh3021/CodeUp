#include <stdio.h>

int main(void) {
  unsigned short n, i=0, min=65535, max=0;
  scanf("%hu", &n);
  unsigned short arr[n];

  while (i<n) {
    scanf("%hu", &arr[i]);
    if (min > arr[i]) {
      min = arr[i];
    }
    if (max < arr[i]) {
      max = arr[i];
    }
    i+=1;
  }
  printf("%d", max - min);
  return 0;
}