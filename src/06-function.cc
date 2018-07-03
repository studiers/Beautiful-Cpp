#include <iostream>

/*
기존의 방식
return_type function_name() {
    
}

후행 반환
auto function_name() -> return_type {
    
}
*/

auto add(auto a, auto b) {
    return a + b;
}

template<typename A, typename B>
auto add(A a, B b) -> decltype(a+b) {
    std::cout << "It is me..\n";
    return a + b;
}

// 겉보기에 위의 두 함수는 달라 보이지만 결국 이 경우에는 에러가 나고 만다 인자값의 자료형이 모두 같기 때문이다

auto main() -> int {
    std::cout << add(1,'A');
    return 0;
}