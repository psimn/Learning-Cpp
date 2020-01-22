#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<int>::const_iterator ivit;
  std::vector<std::string>::const_iterator svit;
  std::vector<int> v1;  //空向量
  std::cout << "There is " << v1.size() << " element(s) in vector v1."
            << std::endl;
  if (v1.begin() != v1.end()) {
    for (ivit = v1.begin(); ivit != v1.end(); ++ivit) {
      std::cout << *ivit << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  std::vector<int> v2(10);  // 10个0元素的非空向量
  std::cout << "There is " << v2.size() << " element(s) in vector v2."
            << std::endl;
  if (v2.begin() != v2.end()) {
    for (ivit = v2.begin(); ivit != v2.end(); ++ivit) {
      std::cout << *ivit << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  std::vector<int> v3(10, 42);  // 10个值为42的非空向量
  std::cout << "There is " << v3.size() << " element(s) in vector v3."
            << std::endl;
  if (v3.begin() != v3.end()) {
    for (ivit = v3.begin(); ivit != v3.end(); ++ivit) {
      std::cout << *ivit << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  std::vector<int> v4{10};  // 1个值为10的非空向量
  std::cout << "There is " << v4.size() << " element(s) in vector v4."
            << std::endl;
  if (v4.begin() != v4.end()) {
    for (ivit = v4.begin(); ivit != v4.end(); ++ivit) {
      std::cout << *ivit << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  std::vector<int> v5{10, 42};  // 2个值依次为10和42的非空向量
  std::cout << "There is " << v5.size() << " element(s) in vector v5."
            << std::endl;
  if (v5.begin() != v5.end()) {
    for (ivit = v5.begin(); ivit != v5.end(); ++ivit) {
      std::cout << *ivit << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  std::vector<std::string> v6{10};  // 10个空串的非空向量
  std::cout << "There is " << v6.size() << " element(s) in vector v6."
            << std::endl;
  if (v6.begin() != v6.end()) {
    for (svit = v6.begin(); svit != v6.end(); ++svit) {
      std::cout << *svit << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  std::vector<std::string> v7{10, "hi"};  // 10个hi的非空向量
  std::cout << "There is " << v7.size() << " element(s) in vector v7."
            << std::endl;
  if (v7.begin() != v7.end()) {
    for (svit = v7.begin(); svit != v7.end(); ++svit) {
      std::cout << *svit << std::endl;
    }
  } else {
    std::cout << "No Element" << std::endl;
  }
  return 0;
}