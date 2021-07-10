// data_structures.cpp
// practice with data structures

#include <iostream>
#include <cstring>
using namespace std;

struct Books {

	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main() {
	
	struct Books book1;

	strcpy(book1.title, "Hello");
	strcpy(book1.author, "Test");
	strcpy(book1.subject, "Another test");
	book1.book_id = 123;

	return 0;
}
