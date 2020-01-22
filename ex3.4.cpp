#include <iostream>
#include <string>

int main() {
  std::string s1, s2;
  while (std::getline(std::cin, s1) && std::getline(std::cin, s2)) {
    if (s1 == s2) {
      std::cout << "String \"" << s1 << "\" is equal." << std::endl;
    } else {
      if (s1.size() > s2.size()) {
        std::cout << s1 << " is longer than " << s2 << std::endl;
      } else if (s1.size() == s2.size()) {
        std::cout << s1 << " has same length with " << s2 << std::endl;
      } else {
        std::cout << s1 << " is shorter than " << s2 << std::endl;
      }
    }
  }
  return 0;
}