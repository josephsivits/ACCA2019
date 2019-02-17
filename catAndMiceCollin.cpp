#include <iostream>

using namespace std;

int main()
{
	int numMice, cat = 1, count;
	cout << "Enter number of mice: ";
	cin >> numMice;
	
	cout << "Enter the count: ";
	cin >> count;

	int mice[100] = { 0 };

	for (int i = 1; i < numMice; i++)
	{
		mice[i] = 1;
	}

	for (int i = 0; i < numMice; i++ ) {
		int move = 0;
		while (move < count*2) {
			if (mice[cat] == 1)
				move++;
			cat = cat++ % numMice;
		}
		mice[cat] = 0;
	}
	for (int i = 0; i < numMice; i++)
		if (mice[i] == 1)
			cout << "White mouse posistion should be " << i;
	system("pause");
	return 0;
}