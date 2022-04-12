#include <iostream>
#include <string>

int findThird(unsigned int* score, unsigned int n) {
  int ranks[n], i;
  for (i=0; i<n; i++) {
    ranks[i] = 1;
    for (int j=0; j<n; j++) {
      if (score[i] < score[j]) {
        ranks[i]++;
      }
    }
  }
  i=0;
  while(ranks[i] != 3) {
    i++;
  }
  return i;
}

int main(void) {
  unsigned int n;
  std::cin >> n;

  std::string name[n];
  unsigned int score[n], i = 0;
  while(i < n) {
    std::cin >> name[i] >> score[i];
    i++;
  }

  int index = findThird(score, n);
  std::cout << name[index];
  return 0;
}