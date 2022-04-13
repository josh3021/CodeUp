#include <stdio.h>
#include <string.h>

int main(void) {
  char s[15];
  scanf("%s", s);
  if ((s[7] - '0') / 3 == 0) { // 1900년대 생
    printf("19%c%c/%c%c/%c%c %c", s[0], s[1], s[2], s[3], s[4], s[5], s[7] == '1' ? 'M' : 'F');
  } else {
    printf("20%c%c/%c%c/%c%c %c", s[0], s[1], s[2], s[3], s[4], s[5], s[7] == '3' ? 'M' : 'F');
  }
  return 0;
}