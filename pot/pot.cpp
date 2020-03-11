#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x = 0, y = 0, p = 0;
	int sum = 0;
	
	cin >> x;
	while (x--) {
		cin >> y;

		// separate exponent & base
		p = y % 10;
		y /= 10;
		sum += pow(y, p);
	}

	cout << sum << endl;
}