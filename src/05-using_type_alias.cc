#include <iostream>
#include <string>
#include <typeinfo>

auto main(void) -> int {
    // typedef
    using str = std::string;
    using int64 = std::int64_t;

    str("HelloWorld!!");
    
    return 0;
}