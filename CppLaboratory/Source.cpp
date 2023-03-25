#include<iostream>;
using namespace std;

void welcome();
char getYesNo();
void printResponse(char responseToPrint);
void AskYesOrNoQuestion();


int main() {
	
	AskYesOrNoQuestion();
	
	system("pause");
}

void welcome() {
	cout << "Welcome!\n";
}

char getYesNo(){

	cout << "Please answer: y or n" << endl;

	char response;

	cin >> response;

	return response;
}

void printResponse(char responseToPrint) {
	cout << "You answer was: " << responseToPrint << endl;
}

void AskYesOrNoQuestion() {
	welcome();
	char answer = getYesNo();

	printResponse(answer);

}