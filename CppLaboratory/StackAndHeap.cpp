#include <iostream>

using namespace std;

struct Character 
{

	Character();

	void PrintHealth();

	string Name;
	float Health;
};

Character::Character() {
	Name = "Default Name";
	Health = 5.f;
}

void Character::PrintHealth() {
	cout << "Health = " << Health << endl;
}

int main(){
	

	for (int i = 0; i < 10; i++) {
		Character* PtrToChar = new Character();

		cout << PtrToChar->Name << endl;

		PtrToChar->PrintHealth();
		
		delete PtrToChar;
	}




	system("pause"); 
}