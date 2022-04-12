#include <stdio.h>
#include <string.h>

int main(void) {
  char s[100];
  scanf("%s", s);
  int r = strcmp(s, "love");
  if (r == 0) {
    printf("I love you.");
  }
  return 0;
}