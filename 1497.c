#include <stdio.h>

int main(void) {
  unsigned short n, i;
  scanf("%hu", &n);
  short arr[n], sizeM = n/2;

  for (i=0; i<n; i++) {
    scanf("%hd", &arr[i]);
  }

  for (i=0; i<sizeM; i++) {
    printf("%d ", arr[i*2] > arr[i*2+1] ? arr[i*2] : arr[i*2+1]);
  }
  return 0;
}