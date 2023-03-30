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

class Dog : public Animal {

public:
	Dog();
	Dog(string name, int age, int num_limbs);

	void Speak();
};

class Corgi : public Dog {
public:
	Corgi();
	Corgi(string name, int age, int num_limbs);
};


int main() {
	/*Animal animal;

	animal.Report();

	Animal animal_2("Cheetah", 7, 5);

	animal_2.Report();*/

	//Dog dog("Mina", 7, 5);

	//dog.Speak();

	Corgi corgi;
	//Corgi corgi("Corgi Shoppe", 7, 5);

	corgi.Speak();
	//corgi.Report();

	system("pause");

}

Animal::Animal() {
	cout << "-------------------------\n";
	cout << "An Animal is born\n";

	Name = "DEFAULT";
	Age = 2;
	NumberOfLimbs = 4;
}
//// Constructor style 1
//Animal::Animal(string name, int age, int num_limbs) {
//	Name = name;
//	Age = age;
//	NumberOfLimbs = num_limbs;
//}
//// Constructor style 2
//Animal::Animal(string name, int age, int num_limbs):Name(name), Age(age), NumberOfLimbs(num_limbs){}
//
//// Constructor style 3
//Animal::Animal(string name, int age, int num_limbs):Name(name), Age(age), NumberOfLimbs(num_limbs){
//	Report();
//}
// Constructor style 4
Animal::Animal(string name, int age, int num_limbs):
	Name(name), Age(age), NumberOfLimbs(num_limbs){
	Report();
}

void Animal::Report() {
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "NumberOfLimbs: " << NumberOfLimbs << endl;
}


Dog::Dog() {
	cout << "A Dog is born\n";
}

Dog::Dog(string name, int age, int num_limbs) {
	Animal(name, age, num_limbs);
}

void Dog::Speak() {
	cout << "Woof!\n";
}

Corgi::Corgi() {
	cout << "A Corgi was born \n";
}

Corgi::Corgi(string name, int age, int num_limbs):Dog(name,age,num_limbs)
{
	
}