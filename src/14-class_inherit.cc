#include <string>

class Person {
public:
    Person(int, std::string);
    ~Person();

private:
    int m_age;
    std::string m_name;
};

// 상속 받는 법은 정말 간단하다. 콜론을 찍고 
class Student : Person {
public:
    Student(int, std::string, std::string);
    ~Student();

private:
    std::string m_school;
};

Person::Person(int age, std::string name) : m_age(age), m_name(name) {}

Student::Student(int age, std::string name, std::string school) : Person(age, name) {
    // 다음과 같이 상속 받은 클래스의 생성자를 호출, 초기화 해줄 수 도 있다
}

// 상속을 받은 클래스는 부모 클래스의 메소드나 여러 속성들을 물려받게 된다