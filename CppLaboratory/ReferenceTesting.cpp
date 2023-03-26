#include<iostream>

using namespace std;

class ReferenceTest {

public:
	void ReferenceLab() {
		string myStr = "Tung";
		string& refmyStr = myStr;
		ChangeStr(myStr);
		cout << myStr << endl;
		//cout << &myStr << endl;
		cout << refmyStr << endl;
		//cout << &refmyStr << endl;

		CanPassLiterals(5); // <= must be const input reference if we want to pass value directly to the function input

	}
private:
	void ChangeStr(string& str) {
		str += "Nguyen";
	}

	void CanPassLiterals(const int& Num) {
		cout << Num << endl;
	}
};