#include <iostream>
#include <vector>

//相邻相加，无奇偶判断
int main() {
  int ival;
  std::vector<int> ivec;
  while (std::cin >> ival) {
    ivec.push_back(ival);
  }
  // for循环会存在重复判断，增加运行时间
  for (std::vector<int>::size_type i = 0; i != ivec.size(); i += 2) {
    if (i == ivec.size() - 1) {
      std::cout << ivec[i] + ivec[i + 1] << std::endl;
    } else {
      std::cout << ivec[i] + ivec[i + 1] << " ";
    }
  }
  //使用while可能更好，但现在并无法结束做到循环
  return 0;
}

//首末相加
int main() {
  // std::cout << 5 / 2 << std::endl;判断5除以2得2
  int ival;
  std::vector<int> ivec;
  while (std::cin >> ival) {
    ivec.push_back(ival);
  }
  // for循环会存在重复判断，增加运行时间
  auto ivec_size = ivec.size();
  for (std::vector<int>::size_type i = 0; i != ivec_size / 2; ++i) {
    if (i == ivec_size / 2 - 1) {
      std::cout << ivec[i] + ivec[ivec_size - 1 - i] << std::endl;
    } else {
      std::cout << ivec[i] + ivec[ivec_size - 1 - i] << " ";
    }
  }
  if (ivec_size / 2 != (ivec_size + 1) / 2) {  //奇数则存在未加上的部分
    std::cout << "Since the size is odd, there is a number "
              << ivec[ivec_size / 2] << " not been operated." << std::endl;
  }
  //使用while可能更好，但现在并无法结束做到循环
  return 0;
}