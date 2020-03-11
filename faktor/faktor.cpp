#include <iostream>
using namespace std;

int main() {
	int x, y, minNum;
	
	cin >> x >> y;
	minNum = (x * (y - 1)) + 1;
	
	cout << minNum << endl;
}