#include <iostream>
#include <vector>

int main() {
  std::vector<int> ivec{1, 2, -85, 65, 42, -3, 7, 6, 50, 655};
  for (auto it = ivec.begin(); it != ivec.end(); ++it) {
    *it *= 2;
  }
  for (auto it = ivec.cbegin(); it != ivec.cend(); ++it) {
    std::cout << *it << std::endl;
  }
  return 0;
}