#include <iostream>
using namespace std;

int calculate(int m, int c);	// prototype

int main()
{
	int mice, count;
	do
	{
		cout << "Enter number of mice: ";
		cin >> mice;
		cout << "Enter the count: ";
		cin >> count;

		cout << "White mouse position should be " << calculate(mice, count) << endl;
	} while (mice != 0 || count != 0);

	return 0;
}

int calculate(int m, int c)
{
	int mousePos = 1;
	int sumOfMice = 0;
	int arr[100] = {0};
	int *arrPtr = 0;

	for (int i = 0; i <= 100; i++)
	{
		arr[i] = 1;
	}
	
	while (sumOfMice != 1)
	{
		sumOfMice = 0;
		for (int i = 1; i <= m; i++)
		{
			sumOfMice += arr[i];
		} // closes for
		if (sumOfMice == 1)
		{
			for (int i = 1; i <= m; i++)
			{
				if (arr[i] == 1)
				{
					*arrPtr = arr[i];
				} // closes inner if
			} // closes for
		} // closes outer if

		while (mousePos <= m)
		{
			if (mousePos += c > m)	// if the cat position exceeds the amount of mouses
			{
				mousePos = mousePos + c % m;
				if (arr[mousePos] == 1)	// if mouse is alive
				{
					arr[mousePos] = 0;	// declares the mouse as dead
					break;				// starts loop again
				}
			}

			if (mousePos += c < m && arr[mousePos += c] == 1)
			{
				mousePos += c;
				arr[mousePos] = 0;
				break;
			}
			if (mousePos += c < m && arr[mousePos] == 0)
			{ // if the mouse moves to a dead mouse...
				(mousePos += c);
				mousePos++;
				break;
			}

			arr[mousePos] = 0;

		}
		return arrPtr;
	}
	return arrPtr;

}