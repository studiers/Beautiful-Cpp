#include <type_traits>

/*

static_assert(condition, the error value)

*/

#include <string>

auto main(void) -> int {
    
    // 컴파일 단에서 잡힌다
    static_assert(std::is_same<std::string, std::stringstream>::value, "Hello World!!");

    /*
        https://en.cppreference.com/w/cpp/header/type_traits
        비교 함수들외에도 직접 해도 되지만 비교 함수들은 위 링크에서 보면 되는 듯 하다.
    */
    return 0;
}