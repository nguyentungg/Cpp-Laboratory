#include <iostream>

using namespace std;

struct CharacterSH
{

	CharacterSH();

	void PrintHealth();

	string Name;
	float Health;
};

CharacterSH::CharacterSH() {
	Name = "Default Name";
	Health = 5.f;
}

void CharacterSH::PrintHealth() {
	cout << "Health = " << Health << endl;
}

//int main(){
//	
//
//	for (int i = 0; i < 10; i++) {
//		CharacterSH* PtrToChar = new CharacterSH();
//
//		cout << PtrToChar->Name << endl;
//
//		PtrToChar->PrintHealth();
//		
//		delete PtrToChar;
//	}
//
//
//
//
//	system("pause"); 
//}