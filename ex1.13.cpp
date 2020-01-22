#include <iostream>
//1.9
int main() {
  int sum = 0;
  for (int val = 50; val <= 100; ++val) {
    sum += val;
  }
  std::cout << "The sum of 50 to 100 inclusive is " << sum << "." << std::endl;
  return 0;
}
//1.10
int main() {
  for (int val = 10; val >= 0; --val) {
    std::cout << val << std::endl;
  }
  return 0;
}
//1.11
int main() {
  int val, val_min;
  std::cin >> val >> val_min;
  for (; val >= val_min; --val) {
    std::cout << val << std::endl;
  }
  return 0;
}