#include <math.h>
#include <iostream>

using namespace std;

bool isPrime(unsigned long input);

int main() {
	unsigned long input, sumDigits;
	while (true) {
		cin >> input;
		if (input == 0)
			return 0;
		sumDigits = 0;

		for (int i = 1; input >= pow(10,i-1); i++) {
			sumDigits += input % (int)(pow(10, i)) / (int)(pow(10, i - 1));
		}

		if (isPrime(sumDigits)) {
			if (isPrime(input))
				cout << input << " is a double primesum\n";
			else
				cout << input << " is a primesum\n";
		}
		else
			cout << input << " is neither\n";
	}
	return 0;
}

bool isPrime(unsigned long input) {
	if (input == 1)
		return false;
	for (unsigned long i = 2; i <= sqrt(input); i++) {
		if (input % i == 0)
			return false;
	}
	return true;
}