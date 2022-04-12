#include <stdio.h>
#include <string.h>

int main(void){
  char m[100], n[100];
  scanf("%s %s", m , n);
  int result = strncmp(m, n, 100);
  if ((int)strlen(m) < (int)strlen(n)) {
    printf("%s %s", m, n);
  } else if ((int)strlen(m) > (int)strlen(n)) {
    printf("%s %s", n ,m);
  } else {
  if (result > 0) {
    printf("%s %s", n, m);
  } else {
    printf("%s %s", m,n);
  }
  }

  return 0;
}