#include<iostream>
#include <string>

using namespace std;
class Animal {
public:
	Animal();
	Animal(string name, int age, int num_limbs);

	string Name;
	int Age;
	int NumberOfLimbs;

	void Report();
};

int main() {
	Animal animal;

	animal.Report();

	Animal animal_2("Cheetah", 7, 5);

	animal_2.Report();

	system("pause");

}

Animal::Animal() {
	cout << "-------------------------\n";
	cout << "An Animal is born\n";

	Name = "DEFAULT";
	Age = 2;
	NumberOfLimbs = 4;
}
// Constructor style 1
Animal::Animal(string name, int age, int num_limbs) {
	Name = name;
	Age = age;
	NumberOfLimbs = num_limbs;
}
// Constructor style 2
Animal::Animal(string name, int age, int num_limbs):Name(name), Age(age), NumberOfLimbs(num_limbs){}

// Constructor style 3
Animal::Animal(string name, int age, int num_limbs):Name(name), Age(age), NumberOfLimbs(num_limbs){
	Report();
}

void Animal::Report() {
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "NumberOfLimbs: " << NumberOfLimbs << endl;
}