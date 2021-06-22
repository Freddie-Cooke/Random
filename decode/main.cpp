#include <iostream>
#include <vector>

int main() {

	std::string leftString; std::string rightString;
	std::string text;
	std::string chr;

	std::cout << "Enter: "; 
	std::cin >> text;
	std::vector<int> list;

	for (int i = 0; i < text.size(); i = i + 2) {
		leftString = text[i]; rightString = text[i+1];
		//std::cout << std::stoi(leftString) << std::endl;

		int num = (std::stoi(leftString)*10) + stoi(rightString);

		//std::cout << num << std::endl;
		list.push_back(num);
	}

	for(int i = 0; i < list.size(); i++) {
		switch(list[i]) {
			case 90:
				std::cout << " ";
				break;
			case 11:
				std::cout << "a";
		}
		//std::cout << list[i] << " ";
	}


	return 0;
}
