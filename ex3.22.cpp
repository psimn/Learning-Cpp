#include <cctype>
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> text{"My",   "name", "is", "John.",  "", "You",
                                "know", "what", "I",  "meant.", ""};
  for (auto it = text.begin(); !it->empty() && it != text.end(); ++it) {
    for (auto &c : *it) {
      if (islower(c) && !ispunct(c)) {
        c = toupper(c);
      }
    }
  }
  for (auto it = text.cbegin(); !it->empty() && it != text.cend(); ++it) {
    std::cout << *it << std::endl;
  }
  //全文如下
  for (auto it = text.cbegin(); it != text.cend(); ++it) {
    if (it == text.cend() - 1) {
      std::cout << *it << std::endl;
    } else {
      std::cout << *it << " ";
    }
  }
  return 0;
}