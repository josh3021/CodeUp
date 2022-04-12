#include <stdio.h>

void star(int i, int s) {
  if (i >= s) {
    return;
  }
  printf("*");
  return star(i+1, s);
}

void print_star(int n, int s) {
  if (s >n) {
    return;
  }
  int i=0;
  star(i, s);
  printf("\n");
  return print_star(n, s+1);
}

int main (void) {
  int n;
  scanf("%d", &n);
  print_star(n, 1);
  return 0;
}