#include <iostream>

// namespace는 클래스, 함수 같은 것들의 중복을 막기 위해 사용한다 (나는)

namespace first {
    void talk() {
        std::cout << "Hello World!! First\n";
    }
}

namespace second {
    void talk() {
        std::cout << "Hello World!! Second\n";
    }
}

// 만약 여러 namespace를 중첩하고 싶다면

namespace A {
    namespace B {
        namespace C {
            // 이렇게 하거나
        }
    }
}

namespace A::B::C {
    // 같이 하면 된다 C++14
}

// 위와 같이 선언할 수 있고 호출 할때는 namespace::element 로 하면 된다

auto main() -> int {
    first::talk();
    second::talk();

    return 0;
}