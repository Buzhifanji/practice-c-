#include <iostream>

int main()
{
  // std 是标准库的命名空间（namespace)
  // 输出
  std::cout << "Enter two numbers: " << std::endl;
  int v1 = 0, v2 = 0;
  // 输入
  std::cin >> v1 >> v2;
  std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;

  return 0;
}
