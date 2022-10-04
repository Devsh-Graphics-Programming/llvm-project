#include <experimental/reflect>
#include <iostream>

namespace meta = std::experimental::reflect;

int main() {
  std::cout << meta::get_id_v<reflexpr(int)> << std::endl;
  std::cout << meta::get_id_v<reflexpr(int)> << std::endl;
  std::cout << meta::get_id_v<reflexpr(int)> << std::endl;

  std::cout << meta::get_id_v<reflexpr(std)> << std::endl;
  std::cout << meta::get_id_v<reflexpr(std)> << std::endl;
  std::cout << meta::get_id_v<reflexpr(std)> << std::endl;
  return 0;
}
