// iterator
// : 반복자

// 말 그대로 반복할 때 쓰이는 것이다

// 입력 반복자
// 출력 반복자
// 순방향 반복자
// 양방향 반복자
// 임의접근 반복자

// 사용법은 아래와 같다

#include <iostream>
#include <iterator>
#include <fstream>

#include <list>
#include <array>

auto main() -> int {

    std::ifstream fs("test.txt");

    std::istream_iterator<double> eos; // End Of Stream
    std::istream_iterator<double> iit(fs);

    while(eos != iit)
        std::cout << *iit << '\n', iit++;

    std::cout << "End";

    // 대부분의 열거형(?) stl 컨테이너 들에는 iterator가 있는 듯 하다

    return 0;
}