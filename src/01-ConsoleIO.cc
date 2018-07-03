#include <iostream>

auto main(void) -> int {
	int value;

	// stdin
	std::cin >> value;

	// stdout
	std::cout << value << '\n';

	// stderr
	std::cerr << value << '\n';

	// stdlog
	std::clog << "Wow.." << '\n';

	return 0;
}