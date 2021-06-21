#include <iostream>

int main() {
	
	try {
		std::cout << 0/0;
	}
	catch (...) {
		std::cout << "division by 0";
	}

	return 0;
}