#include <stdio.h>

int main(void) {
  unsigned int arr[3];

  for (int i=0; i < 3; i++) {
    scanf("%u", &arr[i]);
    if (arr[i] % 2 == 0) {
      printf("even\n");
    }
    else {
      printf("odd\n");
    }
  }

  return 0;
}