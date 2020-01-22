#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<int> v1;  //空向量
  std::cout << "The size of v1 is " << v1.size() << std::endl;
  if (!v1.empty()) {
    for (auto i : v1) {
      std::cout << i << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  std::vector<int> v2(10);  // 10个0元素的非空向量
  std::cout << "The size of v2 is " << v2.size() << std::endl;
  if (!v2.empty()) {
    for (auto i : v2) {
      std::cout << i << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  std::vector<int> v3(10, 42);  // 10个值为42的非空向量
  std::cout << "The size of v3 is " << v3.size() << std::endl;
  if (!v3.empty()) {
    for (auto i : v3) {
      std::cout << i << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  std::vector<int> v4{10};  // 1个值为10的非空向量
  std::cout << "The size of v4 is " << v4.size() << std::endl;
  if (!v4.empty()) {
    for (auto i : v4) {
      std::cout << i << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  std::vector<int> v5{10, 42};  // 2个值依次为10和42的非空向量
  std::cout << "The size of v5 is " << v5.size() << std::endl;
  if (!v5.empty()) {
    for (auto i : v5) {
      std::cout << i << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  std::vector<std::string> v6{10};  // 10个空串的非空向量
  std::cout << "The size of v6 is " << v6.size() << std::endl;
  if (!v6.empty()) {
    for (auto i : v6) {
      std::cout << i << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  std::vector<std::string> v7{10, "hi"};  // 10个hi的非空向量
  std::cout << "The size of v7 is " << v7.size() << std::endl;
  if (!v7.empty()) {
    for (auto i : v7) {
      std::cout << i << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  return 0;
}