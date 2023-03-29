#include <iostream>
#include <string>

using namespace std;
struct Cat {
	Cat();

	int Age;
	float Health;
	void Meow();
};

Cat::Cat() {
	cout << "A new cat is born!" << endl;
	Age = 3;
	Health = 75.3f;
	Meow();
}

void Cat::Meow() {
	cout << "My Age is : " << Age << ".\n";
	cout << "My Health is : " << Health << ".\n";
}

//int main() {
//	Cat cat;
//
//	cat.Age += 5;
//
//	system("pause");
//}