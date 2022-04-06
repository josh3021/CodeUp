#include <iostream>

char *mysubstr(char *str, int start, int count) {
  int end = start + count;
  for (int i=start; i< end; i++) {
    std::cout << str[i] << " ";
  }
  return str;
}

int main(void) {
  char *str;
  int start, count;
  std::cin >> str;
  // std::cin >> start >> count;

  // mysubstr(str, start, count);
}