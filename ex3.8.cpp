#include <iostream>
#include <string>
//while
int main() {
  std::string s;
  std::getline(std::cin, s);
  decltype(s.size()) index = 0;
  while (!s.empty() && index != s.size()) {
    s[index] = 'X';
    ++index;
  }
  std::cout << s << std::endl;
  return 0;
}
//classical for
int main() {
  std::string s;
  std::getline(std::cin, s);
  for (decltype(s.size()) index = 0; !s.empty() && index != s.size();
       ++index) {
    s[index] = 'X';
  }
  std::cout << s << std::endl;
  return 0;
}