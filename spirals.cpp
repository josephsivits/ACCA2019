#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
	int output[10][10] = { 0 };
	int input;
	cin >> input;
	int moveType = 0;
	int moveCount = 0;
	int movePair = 0;
	int countTo = 1;
	int x, y;
	x = input / 2;
	y = input / 2;
	
	if (input % 2 == 0) {
		x--;
		y--;
	}

	for (int move = 1; move <= input*input; move++) {
		//cout << countTo << '\n';
		if (++moveCount == countTo) {
			moveType = (moveType + 1) % 4;
			moveCount = 0;
			if (++movePair == 2) {
				movePair = 0;
				countTo++;
			}
		}
		switch (moveType) {
			case 0:
				y--;
				break;
			case 1:
				x++;
				break;
			case 2:
				y++;
				break;
			case 3:
				x--;
				break;
		}
		output[x][y] = move;

	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
			cout << setw(4) << output[i][j] << ' ';
		cout << '\n';
	}
	system("pause");
}