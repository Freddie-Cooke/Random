#include <iostream>
#include <vector>
#include <windows.h>

enum VKEYS {
	UP = 38,
	ENTER = 13,
	TAB = 9,
	KANA = 21,
	IME_ON = 22,
	IME_FINAL = 24,
	IME_OFF = 26,
	IME_CONVERT = 28,
	IME_ACCEPT = 30,
	IME_MODECHANGE = 31
};

void pressKey(UINT key) {
	INPUT ip;
	ip.type = INPUT_KEYBOARD;

	ip.ki.dwFlags = 0;
	ip.ki.wVk = key;
	SendInput(1, &ip, sizeof(INPUT));

	//Release
	ip.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &ip, sizeof(INPUT));
}

int main() {

	std::string input;

	while (true) {

		std::cout << "Enter: ";
		std::cin >> input;
		std::vector<char> list(input.begin(), input.end());

		for (int i = 3; i > 0; i--) {
			std::cout << "Starting in... " << i << std::endl;
			Sleep(1000);
		} 
		int count = 0;
		//Spam loop
		while (true) {
			count++;
			for (int i = 0; i < list.size(); i++) {
				pressKey((int)(input[i]) - 32);
			}
			pressKey(UP);
			pressKey(UP);
			pressKey(ENTER);

			std::cout << "Typed " << count << " times" << std::endl; 

			Sleep(3*1000);
		}
	}

	return 0;
}