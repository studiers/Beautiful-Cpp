#include <iostream>

class Person {
public:
    // 순수 가상 함수란 상속 받은 곳에서 무조건 구현을 해야지만 사용이 가능케 하는 것이다
    virtual void talk() = 0;
};

class Student : Person {
public:
    // 상속 받은 후에도 구현하지 않겠다면 아래와 같이 해주면 된다
    virtual void talk() = 0;
};

class GoodStudent : Student {
public:
    virtual void talk() override {
        std::cout << "I'm good student!!\n";
    }
};

auto main() -> int {

    // 컴파일러에서 Person은 다음과 같은 이유로 생성 불가능 하다면서 알려준다
    // note: because the following virtual functions are pure within 'Person':
    // pure virtual function을 구현하지 않았기 때문이다
    // Person p;

    GoodStudent s;
    s.talk();

    return 0;
}