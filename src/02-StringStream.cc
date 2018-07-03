#include <iostream>
#include <sstream>

auto main(void) -> int {
    // string을 다루는 iostream이다
    std::stringstream const_ss("123456 12");
    std::stringstream ss;

    int value = 123456;
    ss << value;

    // string stream에 처음에 초기화를 해주고 << 로 값을 넣어주게 되면 기존에 있는 값을 overwrite 해버린다
    const_ss << value;
    const_ss << value; // 123456123456

    std::cout << "After ss << value " << ss.str() << '\n';
    std::cout << "After const_ss << value " << const_ss.str() << '\n';

    // 값을 가져올 때는 cin 같이 사용하면 된다 (stream)
    // 안의 string은 유지된다
    ss >> value;
    const_ss >> value;

    std::cout << "After ss >> value : " << ss.str() << '\n';
    std::cout << "After const_ss >> value " << const_ss.str() << ' ' << value << '\n';

    // str 멤버함수는 인자가 없으면 sstream의 버퍼를 반환 아니면 해당 인자로 버퍼를 set한다
    ss.str("");
    std::cout << "After ss.clear : " << ss.str() << '\n';

    return 0;
}

