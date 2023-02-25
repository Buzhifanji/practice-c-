#include <iostream>
#include "sacles_item.h"

void q_1()
{
  Sales_item book;
  // 读取 ISBN 号、售出的册数以及销售价格
  std::cin >> book;
  // 写入 ISBN、售出的册数、总销售的价格
  std::cout << book << std::endl;
}

void q_2()
{
  Sales_item item1, item2;
  std::cin >> item1 >> item2;
  // 读取一对交易记录
  std::cout << item1 + item2 << std::endl;
}

int main()
{

  // q_1();
  q_2();
  return 0;
}