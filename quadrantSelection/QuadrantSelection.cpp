#include <iostream>

using namespace std;

int main() {
	int x = 0, y = 0;
	cin >> x >> y;

	if (x > 0) {
		if (y > 0) {
			cout << 1 << endl;
		}
		else {
			cout << 4 << endl;
		}
	}
	else {
		if (y < 0) {
			cout << 3 << endl;
		}
		else {
			cout << 2 << endl;
		}
	}

}