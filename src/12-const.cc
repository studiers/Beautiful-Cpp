#include <iostream>

// 함수에서의 const
const int& asit(int& a) {
    return a;
}

auto main() -> int {

    // 변수에서의 const
    // define 디렉티브를 사용하기 보다는 cosnt를 통해서 상수를 만들자
    // const를 적용하면 read만 되고 write는 되지 않는 변수가 되어버린다
    const int i = 0;
    i = 1; // 수정 불가

    int b = 0;
    asit(b) = 1; // 수정이 불가능하다

    return 0;
}

// 멤버함수에서의 const
class Class {
private:
    int a = 1, b = 2;

public:
    int func() const {
        // 멤버변수의 값을 get 할수는 있지만 set할 수 는 없다

        // OK
        std::cout << a << ' ' << b << '\n';

        // Error
        a = 1, b = 2;
    }
}