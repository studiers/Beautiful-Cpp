#include <iostream>

// 세상을 프로그래밍언어로 객체로 표현할 때에 있어서 다음과 같은 경우가 있을 수 있다
// Pen으로 글을 쓰는 행위, Pencil로 글을 쓰는 행위. 그에 따른 액션은 각각 달라야 할 것이다.
// 이것을 해결할 수있는 것이 Overload이다
// 클래스 내에서 뿐만이 아니라 인자의 자료형, 인자의 길이에 의존하여 다른 함수로 인식하면서 생기는 것이다.

class Pen {};
class Pencil {};

class Person {
public:
    void Write(const Pen& pen) {
        std::cout << "I wrote this using pen\n";
    }

    void Write(const Pencil& pencil) {
        std::cout << "I wrote this using pencil\n";
    }
};

auto main() -> int {
    Person p;
    Pen pen;
    Pencil pencil;

    p.Write(pen);
    p.Write(pencil);

    return 0;
}