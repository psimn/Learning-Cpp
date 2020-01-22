#include <cctype>
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string word;
  std::vector<std::string> upper_word;
  while (std::cin >> word) {
    if (!word.empty()) {
      for (auto &c : word) {
        c = toupper(c);
      }
      upper_word.push_back(word);
    }
  }
  for (const auto &i : upper_word) {
    std::cout << i << std::endl;
  }
  return 0;
}