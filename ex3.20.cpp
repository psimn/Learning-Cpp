#include <iostream>
#include <vector>

//������ӣ�����ż�ж�
int main() {
  int ival;
  std::vector<int> ivec;
  while (std::cin >> ival) {
    ivec.push_back(ival);
  }
  // forѭ��������ظ��жϣ���������ʱ��
  for (std::vector<int>::size_type i = 0; i != ivec.size(); i += 2) {
    if (i == ivec.size() - 1) {
      std::cout << ivec[i] + ivec[i + 1] << std::endl;
    } else {
      std::cout << ivec[i] + ivec[i + 1] << " ";
    }
  }
  //ʹ��while���ܸ��ã������ڲ��޷���������ѭ��
  return 0;
}

//��ĩ���
int main() {
  // std::cout << 5 / 2 << std::endl;�ж�5����2��2
  int ival;
  std::vector<int> ivec;
  while (std::cin >> ival) {
    ivec.push_back(ival);
  }
  // forѭ��������ظ��жϣ���������ʱ��
  auto ivec_size = ivec.size();
  for (std::vector<int>::size_type i = 0; i != ivec_size / 2; ++i) {
    if (i == ivec_size / 2 - 1) {
      std::cout << ivec[i] + ivec[ivec_size - 1 - i] << std::endl;
    } else {
      std::cout << ivec[i] + ivec[ivec_size - 1 - i] << " ";
    }
  }
  if (ivec_size / 2 != (ivec_size + 1) / 2) {  //���������δ���ϵĲ���
    std::cout << "Since the size is odd, there is a number "
              << ivec[ivec_size / 2] << " not been operated." << std::endl;
  }
  //ʹ��while���ܸ��ã������ڲ��޷���������ѭ��
  return 0;
}