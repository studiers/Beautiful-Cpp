// Structured binding declaration

// Python 을 해본 사람이라면 다음과 같은 것이 가능함을 알 수 있을 것이다
// a, b = 1, 2

// 이런 것이 C++ 에서도 가능하다는 것을 오늘에서야 알았다!
// https://en.cppreference.com/w/cpp/language/structured_binding

// 는 C++ 17 부터라고 한다 (그저 신기)

#include <iostream>
#include <string>
#include <tuple>
#include <map>

auto main() -> int {

    // binding from pair
    std::map<std::string, std::string> map;

    map["Hello World!"] = "Test!";
    map["HiHi!"] = "It'sTest";

    for (auto [a, b] : map)
        std::cout << a << ' ' << b;
    
    // binding from array
    int arr[2] = {1,2};
    auto [a, b] = arr;

    // tuple-like binding
    std::tuple<int, double, std::string> tuple(1, 2.34, "Test!");
    auto [c, d, e] = tuple;

    return 0;
}