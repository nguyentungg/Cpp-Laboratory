#include<iostream>

using namespace std;

class Overloading {

public:

	void OverloadingFunc() {
		Print("Hello world");
		Print(5);
		Print("Hello world ", "Nguyen Tung");
		Print("The number: ", 8);
	}

private:
	void Print(string str) {
		cout << str << endl;
	}

	void Print(int i) {
		cout << i << endl;
	}

	void Print(string str1, string str2) {
		cout << "String 1: " << str1 << endl;
		cout << "String 2: " << str2 << endl;
	}

	void Print(string str, int i) {
		cout << "String: " << str << endl;
		cout << "Int: " << i << endl;
	}
};