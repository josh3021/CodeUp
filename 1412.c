#include <stdio.h>

int main(void) {
  int alpha[26] = {0};
  char s[90];
  gets(s);
  for (int i=0; s[i]!='\0'; i++) {
    if (s[i] >= 97) {
      alpha[s[i] - 97]++;
    }
  }
  for (int i=0; i<26; i++) {
    printf("%c:%d\n", (char)(i + 97), alpha[i]);
  }
  // int i=0;
  // while(s[i] != EOF) {
  //   if (i >= 97) {
  //     alpha[s[i] - 97]++;
  //   }
  //   i++;
  // }
  // for (int i=0; i<26; i++) {
  //   printf("%d", alpha[i]);
  // }
  return 0;
}