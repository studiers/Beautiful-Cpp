// 프로그래밍을 하다보면 예외를 처리해 줄 필요가 있는 경우가 있다
// 그 경우를 위해 try ~ catch 같은 구문이 존재하는데 이번엔 그것을 다룰 예정이다

#include <iostream>
#include <exception>

// custom exception
class myException : public std::exception {
    virtual const char* what() const throw() {
        return "MyException Test!!";
    }
} myex;

auto main() -> int {
    try {
        // throw를 int를 할 수도 있고 std::string을 할 수도 있다
        // 하지만 exception이라는 클래스가 개별적으로 있다
        throw myex;
    } catch (std::exception& ex) {
        // exception의 원인 및 메시지는 what() 메소드를 통해 get 할 수 있다
        // Java를 떠올리자..
        std::cout << ex.what();
    }
    return 0;
}