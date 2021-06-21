#include <iostream>
#include <vector>

int main() {

	std::string leftString; std::string rightString;
	std::string text;
	std::string chr;

	std::cout << "Enter: "; 
	std::cin >> text;
	std::vector<int> list;

	for (int i = 0; i < text.size(); i++) {
		leftString = text[i];
		//std::cout << std::stoi(leftString) << std::endl;

		int num = std::stoi(leftString);

		//std::cout << num << std::endl;
		list.push_back(num);
	}

	for(int i = 0; i < list.size(); i++) {
		switch(list[i]) {
			case 1:
				std::cout << "a";
				break;
			case 2:
				std::cout << "b";
				break;
			case 3:
				std::cout << "c";
				break;
			case 4:
				std::cout << "d";
				break;
			case 5:
				std::cout << "e";
				break;
			case 6:
				std::cout << "f";
				break;
			case 7:
				std::cout << "g";
				break;
			case 8:
				std::cout << "h";
				break;
			case 9:
				std::cout << "i";
				break;
			case 0:
				std::cout << "j";
				break;
		}
		//std::cout << list[i] << " ";
	}


	return 0;
}