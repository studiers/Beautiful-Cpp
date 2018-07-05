#include <iostream>

// virtual이라는 키워드가 있는데 나도 아직은 정확히 잘 모르겠다
// virtual을 쓴 메소드는 오버라이딩 되었을 때 형변환의 영향을 받지 않지만
// 그렇지 않다면 영향을 받는다
// https://stackoverflow.com/questions/2932909/overriding-vs-virtual

class A {
public:
    void m() {
        std::cout << "m A\n";
    }

    virtual void v() {
        std::cout << "v A\n";
    }
};

class B : A {
public:
    void m() {
        std::cout << "m B\n";
    }

    virtual void v() override {
        std::cout << "v B\n";
    }
};

auto main() -> int {
    B* b = new B;
    
    // not virtual
    ((A*) b)->m();
    b->m();

    // virtual
    ((A*) b)->v();
    b->v();

    /*
        m A
        m B
        v B
        v B
    */

}