#include <iostream>

using namespace std;
class Dog {

public:

	/*Dog() {
		Bark();

		Name = "Default Name";
		Age = 5;
		Health = 10.f;

		cout << Name << endl;
	}*/

	Dog();

	string Name;
	int Age;
	float Health;

	//void Bark() {
	//	cout << "Woof!" << endl;
	//}

	void Bark();
};

//int main() {
//
//	Dog dog;
//
//	system("pause");
//}

Dog::Dog(){
	Bark();

	Name = "Default Name";
	Age = 5;
	Health = 10.f;
	cout << Name << endl;
}

void Dog::Bark() {
	cout << "Meow" << endl;
}

