#include <experimental/reflect>
#include <string_view>
#include <string>
#include <iostream>

namespace meta = std::experimental::reflect;

template <typename T>
struct example {
  auto foo(T i, float f, std::string_view s) -> T{
    std::cout
        << meta::get_name_v<meta::get_callable_t<meta::get_subexpression_t<reflexpr((foo(i, f, s)))>>>
        << std::endl;
    std::cout
        << meta::get_debug_info_v<meta::get_subexpression_t<reflexpr((foo(i, f, s)))>>
        << std::endl;
    return i;
  }
};

int main() {
  example<std::string> e;
  e.foo("1", 2.3F, "blah");
  return 0;
}
