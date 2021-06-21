#include <iostream>
#include <chrono>
#include <random>

using namespace std;

int getSeed() {

	auto start = chrono::steady_clock::now();
    auto end = chrono::steady_clock::now();

    chrono::duration<double> length = end-start;

    int count = 0;

    while ((end - start).count() < 0.5) {

    	end = chrono::steady_clock::now();

    	count ++;
    }

	return count;
}

int main() {

	//Distribution
	//int first_p=0, second_p=0, third_p=0, fourth_p=0; 
	//srand(getSeed());

	//for (int i = 0; i <1000; i++) {
	//	int num = rand() %100 + 1;

	//	if (num > 0 && num <= 25) {
	//		first_p++;
	//	}

	//	if (num > 25 && num <= 50) {
	//		second_p++;
	//	}

	//	if (num > 50 && num <= 75) {
	//		third_p++;
	//	}

	//	if (num > 75 && num <= 100) {
	//		fourth_p++;
	//	}
	//}

	//cout << "First P: " << first_p << endl;
	//cout << "Second P: " << second_p << endl;
	//cout << "Third P: " << third_p << endl;
	//cout << "Fourth P: " << fourth_p << endl;

	srand(getSeed());
	cout << rand() %100 + 1;

	return 0;
}
