#include <iostream>

using namespace std;

int main() {
	int i = 0;
	int fooCounter = 0;
	int barCounter = 0;

	for (i = 1; i <= 2000; i++) {
		cout << i;
		if (i % 50 == 0)
		{
			cout << " FOO ";
			fooCounter++;
		}
		if (i % 33 == 0)
		{
			cout << " BAR ";
			barCounter++;
		}
		cout << endl;
	}
	cout << "\nThe total number of Foos is " << fooCounter << endl;
	cout << "\nthe total number of bars is " << barCounter << endl;

	return 0;
	
}