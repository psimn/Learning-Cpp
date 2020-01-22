#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<int> v1;  //������
  std::cout << "The size of v1 is " << v1.size() << std::endl;
  if (!v1.empty()) {
    for (auto i : v1) {
      std::cout << i << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  std::vector<int> v2(10);  // 10��0Ԫ�صķǿ�����
  std::cout << "The size of v2 is " << v2.size() << std::endl;
  if (!v2.empty()) {
    for (auto i : v2) {
      std::cout << i << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  std::vector<int> v3(10, 42);  // 10��ֵΪ42�ķǿ�����
  std::cout << "The size of v3 is " << v3.size() << std::endl;
  if (!v3.empty()) {
    for (auto i : v3) {
      std::cout << i << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  std::vector<int> v4{10};  // 1��ֵΪ10�ķǿ�����
  std::cout << "The size of v4 is " << v4.size() << std::endl;
  if (!v4.empty()) {
    for (auto i : v4) {
      std::cout << i << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  std::vector<int> v5{10, 42};  // 2��ֵ����Ϊ10��42�ķǿ�����
  std::cout << "The size of v5 is " << v5.size() << std::endl;
  if (!v5.empty()) {
    for (auto i : v5) {
      std::cout << i << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  std::vector<std::string> v6{10};  // 10���մ��ķǿ�����
  std::cout << "The size of v6 is " << v6.size() << std::endl;
  if (!v6.empty()) {
    for (auto i : v6) {
      std::cout << i << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  std::vector<std::string> v7{10, "hi"};  // 10��hi�ķǿ�����
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