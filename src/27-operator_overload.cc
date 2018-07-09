// 자 생각을 해보자
// 만약에 Status라는 능력치를 가리키는 클래스가 있다고 하자
// 두 Status 객체를 더해서 능력 값들을 모두 더한 새로운 객체를 만들고 싶다
// 1+1이 2가 되는 것처럼 공격력:2,방어력:3 + 공격력:3,방어력:2 => 공격력:5,방어력:5 로 만들고 싶다
// 이때 우리는 연산자 오버로딩으로 사전에 정의 되지 않은 연산을 정의 할 수 있다!! (Wow!!)

#include <iostream>
#include <string>

class Status {
public:

    Status(const int atk, const int def) {
        this->atk = atk;
        this->def = def;
    }

    // 이 부분이 연산자 오버로딩 부분이다
    // Status + Status가 가능하다ㅎ
    Status operator +(Status& status) {
        return Status(status.atk + atk, status.def + def);
    }

    // type cast overload이다
    operator std::string() {
        return "Status("+std::to_string(atk)+","+std::to_string(def)+")";
    }

private:
    int atk = 0, def = 0;
};

auto main() -> int {
    Status p1(1,2), p2(2,1);
    std::cout << (std::string)(p1+p2);
    return 0;
}