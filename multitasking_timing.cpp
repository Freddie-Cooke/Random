// multitasking_timing.cpp, Freddie Cooke
// multitasking timing test

#include <iostream>
#include <mingw.thread.h>
#include <algorithm>
#include <chrono>

using namespace std;

void PrintList(int &list, int size) {
	cout << "list: ";
	for (int i = 0; i < size; i++) {
		cout << *(&list+i);
	}
	cout << endl;
}

void doathing() {
	int a_list[8] = {1,5,7,32,4,8,6,3};
	sort(a_list, a_list+8);
	PrintList(a_list[0], 8);
}

void doanother() {
	int another_list[10] = {7,5,4,6,9,57,36,36,38,97};
	sort(another_list, another_list+10);
	PrintList(another_list[0], 10);
}

void programA() {
	thread primary(doathing);
	thread secondary(doanother);

	primary.join();
	secondary.join();
}

void programB() {
	doathing();
	doanother();
}

int main() {

	chrono::high_resolution_clock::time_point t1 = chrono::high_resolution_clock::now();

	programA();

	chrono::high_resolution_clock::time_point t2 = chrono::high_resolution_clock::now();

	chrono::duration<double, milli> time_span = t2-t1;

	cout << "Took: " << time_span.count() << endl;

	chrono::high_resolution_clock::time_point t3 = chrono::high_resolution_clock::now();

	programB();

	chrono::high_resolution_clock::time_point t4 = chrono::high_resolution_clock::now();

	chrono::duration<double, milli> time_spann = t4-t3;

	cout << "Took: " << time_spann.count() << endl;

	return 0;
}
