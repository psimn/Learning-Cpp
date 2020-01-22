#include <iostream>
#include <string>

int main() {
  std::string s, sCurr;
  while (std::cin >> sCurr) {
    s += sCurr + " ";
  }
  std::cout << "The sum of strings is " << s << std::endl;
  return 0;
}