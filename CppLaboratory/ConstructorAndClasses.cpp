#include <iostream>

using namespace std;
class DogCons {

public:

	/*DogCons() {
		Bark();

		Name = "Default Name";
		Age = 5;
		Health = 10.f;

		cout << Name << endl;
	}*/

	DogCons();

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

DogCons::DogCons(){
	Bark();

	Name = "Default Name";
	Age = 5;
	Health = 10.f;
	cout << Name << endl;
}

void DogCons::Bark() {
	cout << "Meow" << endl;
}

