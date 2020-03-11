#include <iostream>

using namespace std;

int genGuess(int n, int x) {
	return (int) ((x - n) / 2) + n;
}

int main() {
	int guess = 500;
	string response;
	int gMin = 1, gMax = 1000;
	
	for (int i = 0; i < 10; i++) {
		cout << guess << endl;
		fflush(stdout);

		cin >> response;

		if (response == "lower") {
			gMax = guess - 1;
			guess = genGuess(gMin, gMax);
		}
		else if (response == "higher") {
			gMin = guess + 1;
			guess = genGuess(gMin, gMax);
		}
		else if (response == "correct") {
			break;
		}
	}
	return 0;
}