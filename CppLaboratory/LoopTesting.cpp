#include <iostream>

using namespace std;

class LoopTesting {

public:

	void DoWhiteLoop() {
		int i = 0;
		int j = 0;

		do
		{
			i += 10;
			j = i * i;
			cout << "Loop Before IF" << endl;
			if (j > 1000) {
				continue;
			}

			cout << i << endl;
			cout << j << endl;

			cout << "Loop After IF" << endl;

		} while (i <= 100);

		cout << "Does continue run this print ?!";

	}
};