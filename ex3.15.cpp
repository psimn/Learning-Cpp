#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string sval;
  std::vector<std::string> svec;
  while (std::getline(std::cin, sval)) {
    svec.push_back(sval);
  }
  return 0;
}