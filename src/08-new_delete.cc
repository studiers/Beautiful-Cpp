#include <iostream>

auto main() -> int {

    // malloc
    char* str = new char[10];

    std::cout << (int)str << '\n';
    
    // free
    delete str;

    // delete를 해도 str에 메모리 주소가 그대로 담겨져 있다
    // 만약 값을 지워주고 싶다면 nullptr || NULL(0)
    str = nullptr;

    return 0;
}