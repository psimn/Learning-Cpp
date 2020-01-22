#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item book, book1, book2;
  std::cin >> book1 >> book2;
  book = book1 + book2;
  std::cout << book << std::endl;
  return 0;
}