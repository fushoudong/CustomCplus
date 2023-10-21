#include <iostream>

// 定义宏常量
#define DAY 7
int main() {
  const int month = 12;
  // month = 12; const 不能修改
  std::cout << "day = " << DAY << ", year = " << month << std::endl;
  return 0;
}