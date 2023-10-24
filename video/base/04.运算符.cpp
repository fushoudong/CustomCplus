#include <iostream>
/*
  1. 算术运算符：用于处理四则运算
  2. 赋值运算符：将表达式的值赋给变量
  3. 比较运算符：用于表达式的比较
  4. 逻辑运算符：用于根据表达式的值返回一个真或者假的值
 */

void CalcMethod() {
  int a = 10;
  int b = 3;
  std::cout << "a + b = " << (a + b) << std::endl;
  std::cout << "a - b = " << (a - b) << std::endl;
  std::cout << "a x b = " << (a * b) << std::endl;
  std::cout << "a - b = " << (a / b) << std::endl;
  std::cout << "a % b = " << (a % b) << std::endl;
  double d1 = 10.2f;
  double d2 = 0.5f;
  std::cout << static_cast<float>(d1 / d2) << std::endl;
}

void ValueMethod() {}
void CompareMethod() {}

void LogicMethod() {}

int main() {

  CalcMethod();
  return 0;
}