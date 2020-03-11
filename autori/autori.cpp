#include <iostream>
using namespace std;

int main() {
	char c;
	string initials;

	cin.get(c);
	initials += c;

	while (cin.get(c)) {
		if (c == '\n') { break; }
		else if (c == '-') {
			cin.get(c);
			initials += c;
		}
	}
	cout << initials << endl;
}