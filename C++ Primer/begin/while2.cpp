#include <iostream>

int main()
{
  int sum = 0, val = 0;
  // 读取数据直到遇到文件尾，计算所有读入的值得和
  while (std::cin >> val)
  {
    sum += val;
  }
  std::cout << "Sum is: " << sum << std::endl;

  return 0;
}