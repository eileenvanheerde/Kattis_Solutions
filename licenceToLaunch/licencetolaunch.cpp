#include <iostream>

using namespace std;

int main() {
	int licence, a, b;
	int numDays = 0;

	cin >> licence;
	cin >> a;

	for (int i = 1; i < licence; i++) {
		cin >> b;
		if (b < a) {
			numDays = i;
			a = b;
		}
	}

	printf("%d", numDays);
}