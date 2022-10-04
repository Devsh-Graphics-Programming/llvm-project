#include <iostream>
#include <string_view>

namespace mirror {

consteval std::string_view get_name_view(__metaobject_id mo) {
  return {__metaobject_get_name(mo),
          __metaobject_name_len(mo)};
}

}

int main() {
  std::cout << get_name_view(__reflexpr_id(int)) << std::endl;
  return 0;
}
