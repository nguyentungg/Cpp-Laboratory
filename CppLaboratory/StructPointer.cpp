#include <iostream>

using namespace std;

struct Container {
	string Name;

	int X;
	int Y;
	int Z;

};

int main() {
	Container container = { "Sam", 5 , 6, 7 };
	Container* PtrToCont = &container;
	cout << (*PtrToCont).Name << endl; // Output: Sam
	cout << (*PtrToCont).X << endl;	// Output: 5

	cout << PtrToCont->Name << endl; // Output: Sam
	cout << PtrToCont->X << endl; // Output: 5
}