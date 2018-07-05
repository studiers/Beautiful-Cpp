#include <iostream>

// inline 키워드는 함수를 그곳에 바로 집어넣는 격이다
// 고로 속도가 빠르다..?

// inline은 매크로다 (별을 먹는자 왈)

inline int add(const int&& a, const int&& b) {
    return a + b;
}

auto main() -> int {
    std::cout << add(1, 2);
    return 0;
}