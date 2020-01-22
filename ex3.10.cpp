#include <cctype>
#include <iostream>
#include <string>

int main() {
  std::string s;
  std::getline(std::cin, s);
  for (auto &c : s) {
    if (ispunct(c)) {
      c = ' ';
    }
  }
  std::cout << s << std::endl;
  return 0;
}