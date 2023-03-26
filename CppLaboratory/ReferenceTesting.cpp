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

	}
private:
	void ChangeStr(string& str) {
		str += "Nguyen";
	}
};