#include <iostream>
#include <string>

auto main() -> int {

    int origin = 1;

    // with pointer
    int* ptr = &origin;

    *(ptr) = 100;

    std::cout << "By ptr :: " << origin << '\n';

    // with reference
    // 특징
    // 포인터 같이 메모리를 차지 하지 않는다
    int& ref = origin;

    ref = 123;

    std::cout << "By ref :: " << origin << '\n';

    return 0;
}