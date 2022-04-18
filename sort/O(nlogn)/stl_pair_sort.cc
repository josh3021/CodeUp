#include <iostream>
#include <algorithm>
#include <vector>

bool compair (std::pair<int, std::string> a, std::pair<int, std::string> b) {
  return b.first > a.first;
}

int main(void) {
  std::vector<std::pair<int, std::string> > v;
  v.push_back(std::pair<int, std::string>(90, "A"));
  v.push_back(std::pair<int, std::string>(80, "B"));
  v.push_back(std::pair<int, std::string>(100, "C"));
  v.push_back(std::pair<int, std::string>(96, "D"));
  v.push_back(std::pair<int, std::string>(94, "E"));

  std::sort(v.begin(), v.end());
  for (int i=0; i<v.size(); ++i) {
    std::cout << v[i].second << std::endl;
  }
  return 0;
}