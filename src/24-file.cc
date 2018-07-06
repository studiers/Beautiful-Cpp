#include <fstream>
#include <iostream>

// C언어에서는 FILE 구조체를 사용했지만 C++에서는 대신 file stream을 사용한다
auto main() -> int {
    std::fstream wfs("test.txt", std::fstream::out);
    wfs.write("Test", 4);
    wfs.close();

    char input[5] = {0};
    std::fstream rfs("test.txt", std::fstream::in);
    rfs.read(input, 4);

    std::cout << input;
}