#include <iostream>

class Person {
public:
    int a, b; // private에 있어야 하지만 일단은 public에 놓는다
    
    Person(); // constructor
    // 만약 생성자나 파괴자를 정의하지 않는 다면 기본 생성자, 파괴자가 들어가게 된다
};

Person::Person() : a(0), b(0) {
    // 멤버변수의 초기화도 위와 같이 동시에 해줄 수 있다
}

// 이렇게 선언은 안에서 구현을 바깥에서 할 수 있다

auto main() -> int {
    Person person;
    std::cout << person.a << ' ' << person.b;
    return 0;
}