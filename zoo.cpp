#include <iostream>
using namespace std;

int main()
{
	int numZones;
	
	cout << "Enter number of Zones" << endl;
	cin >> numZones;

	int zoo[20][20] = { 0 };

	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;
	
	int iter = 0;

	while (iter < numZones)
	{
		cin >> x1;
		cin >> y1;
		cin >> x2;
		cin >> y2;

		for (int x = x1; x < x2+1; x++)
		{
			for (int y = y1; y < y2+1; y++)
			{
				zoo[x][y] ++;
			}
		}

		iter++;
	}


	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{

			if (zoo[i][j] > 1)
			{
				cout << "Overlap" << endl;
				return 0;
			}
		}
		cout << '\n';
	}

	cout << "No Overlap" << endl;
	return 0;
}