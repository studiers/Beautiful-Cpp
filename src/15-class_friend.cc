#include <string>

class Person {
    friend class Student;
public:
    Person(int, std::string);
    ~Person();

private:
    int m_age;
    std::string m_name;
};

class Student : Person {
public:
    Student(int, std::string, std::string);
    ~Student();

private:
    std::string m_school;
};

Person::Person(int age, std::string name) : m_age(age), m_name(name) {}

Student::Student(int age, std::string name, std::string school) : Person(age, name) {
    // friend class에 등록해 놨으므로 우리는 Person의 private에 접근 가능하다
    // [!] 원래는 상속 받아도 private는 접근 불가하다
    Person::m_age;
}