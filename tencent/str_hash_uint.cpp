#include <iostream>
#include <string>

int main() {
  uint32_t uin = 2074452940;
  uint64_t transform_value = uin << 32;
  std::cout << "v = " << std::to_string(transform_value) << std::endl;
  return 0;
}