#include <iostream>
#include <vector>

int main() {
  int ival;
  std::vector<int> ivec;
  while (std::cin >> ival) {
    ivec.push_back(ival);
  }
  return 0;
}