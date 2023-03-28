#include <iostream>

using namespace std;

void PointerBasic();
void PointerInArray();

//int main() {
//
//	//PointerBasic();
//	PointerInArray();
//	system("pause");
//}

void PointerBasic() {
	int a = 100;

	int* aPtr;
	aPtr = &a;

	cout << aPtr << endl;

	int b = 50;

	aPtr = &b;

	cout << aPtr << endl;
}

void PointerInArray() {
	int number[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int* NumPtr = number;

	cout << *NumPtr << endl; // Output: 0

	NumPtr++;

	cout << *NumPtr << endl; // Output: 1

	NumPtr += 2;

	cout << *NumPtr << endl; // Output: 1

}