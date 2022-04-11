#include <stdio.h>

int n, d[110];

int f(void) {
  int max = -2147483646, i=0;
  for (i=0; i<n; i++) {
    int target = d[i];
    if (target > max) {
      max = target;
    }
  }
  i=0;
  while(d[i] != max) {
    i++;
  }
  return i+1;
}

int main()
{
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &d[i]);

  printf("%d", f());
  return 0;
}