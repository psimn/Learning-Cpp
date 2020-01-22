#ifndef STUDYCPP_SALES_DATA_H_
#define STUDYCPP_SALES_DATA_H_
#include <string>

struct Sales_data {
  std::string book_isbn = '\0';
  unsigned sales_num = 0;
  double sales_price = 0.0;
};

#endif  // !STUDYCPP_SALES_DATA_H_
