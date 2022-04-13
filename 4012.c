#include <stdio.h>
#include <stdlib.h>

int* getRanks(int* arr, int n) {
  int* ranks = malloc(sizeof(int) * n), i=0, j;
  while (i<n) {
    ranks[i] = 1;
    i++;
  }

  for (i=0; i<n; i++) {
    for (j=0; j<n; j++) {
      if (arr[i] < arr[j]) {
        ranks[i]++;
      }
    }
  }
  return ranks;
}

int main(void) {
  int n;
  scanf("%d", &n);
  int arr[n], i=0;
  while(i<n) {
    scanf("%d", &arr[i]);
    i++;
  }
  int* ranks = getRanks(arr, n);
  i=0;
  while(i<n) {
    printf("%d %d\n", arr[i], ranks[i]);
    i++;
  }
  return 0;
}