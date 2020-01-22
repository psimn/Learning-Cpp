#include <iostream>
#include <string>

int main() {
  std::string s;
  while (std::getline(std::cin, s)) {
    // while (std::cin>>s) {
    if (!s.empty()) {
      std::cout << s << std::endl;
      std::cout << "-----"
                << "length: " << s.size() << std::endl;
    } else {
      std::cerr << "-----length: " << s.size() << std::endl;
    }
  }
  // std::string s1 = "a" + "b";   //这一行是错误的
  return 0;
}