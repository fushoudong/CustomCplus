#include <iostream>
#include <string>
/**
 * 为变量分配内存空间，存储整数类型数据
    short: 2字节
    int:   4字节
    long:  4字节(windows), 8(linux)
    ll:    8字节
 */
void IntegerMethod() {
  short s_num = 32769;
  int i_num = 32768;
  long l_num = 32768;
  std::cout << "s_num = " << s_num << ", size = " << sizeof(s_num)
            << "\ni_num = " << i_num << ", size = " << sizeof(i_num)
            << "\nl_num = " << l_num << ", size = " << sizeof(l_num)
            << std::endl;
}
void FloatMethod() {
  /*
    浮点类型：
        float：单精度 (7位有效数字)
        double：双精度 (15位有效数字)
    默认输出一个小数会显示六位有效数字
   */
  float f_v = 3.14f;
  double d_v = 3.141592654f;
  // 科学计数法
  float f1 = 3e5;
  float f2 = 3e-2;
  std::cout << "f_v = " << f_v << ", size = " << sizeof(f_v)
            << "\nd_v = " << d_v << ", size = " << sizeof(d_v)
            << "\nf1 = " << f1 << ", size = " << sizeof(f1) << "\nf2 = " << f2
            << ", size = " << sizeof(f2) << std::endl;
}

void CharMethod() {
  // 只能存储一个字符
  char ch = 'a'; // 存储了对应的ASCII编码
  std::cout << "ch = " << ch << ", size = " << sizeof(ch)
            << ", 对应的ASCII = " << (int)ch << std::endl;
}

void BoolMethod() {}

void StringMethod() {
  // 1. C语言风格
  char c[] = "hello";
  std::cout << "C语言风格: " << c << "\t大小：" << sizeof(c) << std::endl;
  std::string s = "hello";
  std::cout << "C++语言风格；" << s << "\t大小：" << sizeof(s) << std::endl;
}

int main() {
  StringMethod();
  return 0;
}