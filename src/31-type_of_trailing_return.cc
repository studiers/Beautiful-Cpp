// 람다를 작성하다 보면 반환값을 정해주는 곳이 없다
// 아무것도 없으면 반환값에 의하여 정해지는 걸로 알고 있는데
// 반환값을 지정해 줄수 있다 그것이 후행 반환 지정방식이다

#include <iostream>
#include <typeinfo>

auto main() -> int {
    auto lambda = []() -> double {};

    std::cout << typeid(lambda()).name(); // 출력 결과 d
    
    return 0;
}