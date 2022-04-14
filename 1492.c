#include <stdio.h>

int main(void) {
  int n, r = 0, i;
  scanf("%d", &n);
  int arr[n];
  for (i=0; i<n; i++) {
    scanf("%d", &arr[i]);
    if (i==0) {continue;}
    arr[i] += arr[i-1];
  }
  for (i=0; i<n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}