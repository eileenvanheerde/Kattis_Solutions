#include <iostream>
using namespace std;

int main() {
	int x, y, n;
	
	cin >> x >> y >> n;

	for (int i = 1; i <= n; i++) {
		if (i % x == 0) { printf("Fizz"); }
		if (i % y == 0) { printf("Buzz"); }
		if (i % y && i % x) { printf("%d", i); }
		printf("\n");
	}
}