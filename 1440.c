#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  int arr[n], i = 0;
  while(i < n) {
    scanf("%d", &arr[i]);
    i++;
  }
  for (int i=0; i<n; i++) {
    printf("%d: ", i+1);
    for (int j=0; j < n; j++) {
      if (i == j) {
        continue;
      }
      if (arr[i] < arr[j]) {
        printf("< ");
      }
      else if (arr[j] == arr[i]) {
        printf("= ");
      }
      else {
        printf("> ");
      }
    }
    printf("\n");
  }
  return 0;
}