#include <iostream>
#include <string>

class Person {
    friend class Student;
public:
    Person(int, std::string);
    ~Person() {};

    void talk() {
        std::cout << "I'm Person\n";
    }

private:
    int m_age;
    std::string m_name;
};

class Student : Person {
public:
    Student(int, std::string, std::string);
    ~Student() {};

    // 지금 상위 클래스에 있는 talk라는 
    void talk() {
        std::cout << "I'm Student\n";
    }

private:
    std::string m_school;
};

Person::Person(int age, std::string name) : m_age(age), m_name(name) {}

Student::Student(int age, std::string name, std::string school) : Person(age, name) {
    // friend class에 등록해 놨으므로 우리는 Person의 private에 접근 가능하다
    // [!] 원래는 상속 받아도 private는 접근 불가하다
    Person::m_age;
}

auto main() -> int {
    Person p(12, "DSM");
    Student s(12, "DSM", "DSM");

    p.talk();
    // 본래 Person을 상속 받았기에 오버라이딩 해주지 않았다면 I'm Person이 출력 되었겠지만 I'm Student가 출력된다
    s.talk();

    return 0;
}