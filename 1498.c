#include <stdio.h>
#include <math.h>

short getMin(short* arr, unsigned short start, unsigned short end) {
  short min = 32767;
  while(start < end) {
    if (arr[start] < min) {
      min = arr[start];
    }
    start+=1;
  }
  return min;
}

int main(void) {
  unsigned short n, g, i;
  scanf("%hd %hd", &n, &g);
  short arr[n];
  for (i=0; i<n; i+=1) {
    scanf("%hd", &arr[i]);
  }
  for (i=0; i<(int)ceil((float)(n)/g); i++) {
    printf("%d ", getMin(arr, i*g, n <= (i+1)*g ? n : (i+1)*g));
  }
  return 0;
}