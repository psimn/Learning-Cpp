#include <iostream>
#include <vector>

int main() {
  int ival;
  std::vector<int> ivec;
  while (std::cin >> ival) {
    ivec.push_back(ival);
  }
  //两两相加
  auto beg = ivec.cbegin(), end = ivec.cbegin() + (ivec.size() / 2) * 2;
  for (auto it = beg; it != end; it += 2) {
    if (it + 2 == end) {
      std::cout << *it + *(it + 1) << std::endl;
    } else {
      std::cout << *it + *(it + 1) << " ";
    }
  }
  if (end != ivec.cend()) {
    std::cout << "Since the size is odd, there is a number "
              << *(ivec.cend() - 1) << " no partner to operate with."
              << std::endl;
  }
  //首末相加
  std::vector<int>::const_iterator begi = ivec.cbegin(),
                                   endi = ivec.cbegin() +
                                          (ivec.cend() - begi) / 2 + 1;
  for (std::vector<int>::const_iterator it = begi; it != endi; ++it) {
    if (it + 1 == end) {
      std::cout << *it + *(ivec.cend() - 1 - (it - begi)) << std::endl;
    } else {
      std::cout << *it + *(ivec.cend() - 1 - (it - begi)) << " ";
    }
  }
  if (((ivec.cend() - ivec.cbegin()) / 2) * 2 !=
      (ivec.cend() - ivec.cbegin())) {
    std::cout << "Since the size is odd, there is a number " << *(endi - 1)
              << " no partner to operate with." << std::endl;
  }
  return 0;
}