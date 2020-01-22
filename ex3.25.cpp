#include <iostream>
#include <vector>

int main() {
  unsigned grade;
  std::vector<int> scores(11, 0);
  while (std::cin >> grade) {
    if (grade <= 100) {
      ++*(scores.begin() + grade / 10);
    }
  }
  for (auto i : scores) {
    std::cout << i << " ";
  }
  return 0;
}