#include <iostream>

// template는 자바에서의 제네릭과 비슷하다
// 그냥 함수에서도 사용할 수 있고 클래스에 적용할 수도 있다

// ...으로 하면 가변길이의 인자가 된다
template<int I, typename T, typename... Args>
void func() {
    std::cout << I;
}

auto main() -> int {
    func<1, int, int, long>();
    return 0;
}