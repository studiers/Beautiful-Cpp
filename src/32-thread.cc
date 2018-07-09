// C++ 에서 스레드 사용해보기

#include <iostream>
#include <thread> // Error 가 발생하는 데 MinGW에서 thread를 지원하지 못하기 때문이라고 한다

auto main() -> int {
    auto func = [](int a, int b){while(true){std::cout << a << ' ' << b << '\n';}};
    std::thread th(func, 1, 2);
    th.join();
    return 0;
}