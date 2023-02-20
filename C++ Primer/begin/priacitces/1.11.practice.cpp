#include <iostream>

int main()
{
  std::cout << "请输入两个整数：" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;

  // 处理哪个两个数值之间的大小问题
  if (v1 < v2)
  {
    int temp = v2;
    v2 = v1;
    v1 = temp;
  }

  while (v1 >= v2)
  {
    std::cout << v1 << std::endl;
    --v1;
  }

  return 0;
}
