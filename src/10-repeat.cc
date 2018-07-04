#include <iostream>
#include <string>

auto main() -> int {
    // for
    for (int i(0); i < 10; ++i) {
        std::cout << "This is " << i << '\n';
    }

    // foreach
    for (const std::string&& s : { "Hello" , "World" }) {
        std::cout << s << '\n';
    }

    // while
    while(true) {
        std::cout << "Wow..." << '\n';
    }
}