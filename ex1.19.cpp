#include <iostream>
#include "pch.h"
int main() {
  int val, val_min;
  while (std::cin >> val >> val_min) {
    if (val >= val_min) {
      while (val >= val_min) {
        std::cout << val << std::endl;
        --val;
      }
    } else {
      std::cout << "Plz check and input again." << std::endl;
    }
  }
  return 0;
}
