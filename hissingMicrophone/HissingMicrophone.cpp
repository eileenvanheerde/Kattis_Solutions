#include <iostream>
using namespace std;

int main() {
	char c, prev = '\0';

	while (cin.get(c)) {
		if (prev == '\0') {
			prev = c;
			continue;
		}

		if (c == '\n') {
			cout << "no hiss" << endl;
			break;
		}

		if (prev == 's' && c == 's') {
			cout << "hiss" << endl;
			break;
		}

		prev = c;
	}
}