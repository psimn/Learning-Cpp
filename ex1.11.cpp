#include <iostream>

int main() { 
  int val, val_min;
  std::cin >> val >> val_min;
  while (val >= val_min) {
    std::cout << val << std::endl;
  }
  return 0;
}