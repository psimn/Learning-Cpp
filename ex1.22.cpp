#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item book, bookCurr;
  while (std::cin >> bookCurr) {
    Sales_item cnt = bookCurr;
    while (std::cin >> book) {
      cnt += book;
    }
    std::cout << cnt << std::endl;
  }
  return 0;
}