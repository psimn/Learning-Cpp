#include <iostream>
#include "Sales_item.h"


int main() {
  Sales_item bookCurr, book;
  if (std::cin >> bookCurr) {
    int cnt = 1;
    while (std::cin >> book) {
      if (bookCurr.same_isbn(book)) {
        ++cnt;
      } else {
        std::cout << bookCurr.isbn << " occurs " << cnt << " times"
                  << std::endl;
        bookCurr = book;
        cnt = 1;
      }
    }
    std::cout << bookCurr.isbn << " occurs " << cnt << " times" << std::endl;
  }
}