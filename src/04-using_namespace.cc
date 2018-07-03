#include <iostream>

namespace A {
    void f(int a) {
        std::cout << "Int f\n";
    }
}

// 아래 구문을 통해 A::f 로 호출하지 않고 f로만 호출하면 됩니다

// 근데 만약에 원래 현재 네임스페이스에 f가 하나 더 존재한다면?
void f(int b) {
    std::cout << "Local Namespace Test..?\n";
}

// 그냥 f를 호출 한다면 에러가 생길 것이다
// 만약 f(int b) 를 호출 하고 싶다면 ::f로 호출하면 컴파일러는 f(int b) 를 호출하게 할 것이다
namespace B {
    void func(int a) {
        using A::f;
        f(a);
    }
}

namespace A {
    void f(char b) {
        std::cout << "Char f\n";
    }
}

#include <string>

auto main(void) -> int {

    // inline namespace
    using A::f;

    // 원래 대로면 A::f(char) 가 생겼기 때문에 func가 그 f(char)을 호출 할 거 같지만 그렇지 않다
    B::func('a'); // A::f(int)
    A::f('a'); // A::f(char)

    return 0;
}