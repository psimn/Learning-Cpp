#include <iostream>
#include <string>

int main() {
  std::string s;
  std::getline(std::cin, s);
  for (char c : s) {
    c = 'X';
  }
  std::cout << s << std::endl;
  return 0;
}