#include <iostream>
#include <string>

using namespace std;
class StringTest {


public:
	void StringFunction() {
		string MyString;

		MyString = "My cat name is: ";
		string first("Spot");
		string last = "John";

		MyString += (first + " " + last);

		cout << MyString << endl;
	}

};