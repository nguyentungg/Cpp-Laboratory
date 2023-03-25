#include<iostream>;
using namespace std;

// This is call function prototype, Because main() function call function before the function itself was define. 
// So in C++ we can not call the function before define the function before main().
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