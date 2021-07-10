// windows_api.cpp, Freddie Cooke
// testing programs using the windows api

#include <iostream>
#include <windows.h>

using namespace std;

int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow) {
	
	MessageBox(NULL, TEXT("Hello" ), TEXT("Hello Msg"), 0);
	return 0;
}
