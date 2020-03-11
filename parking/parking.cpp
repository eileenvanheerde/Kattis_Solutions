#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
	int prices[3], depTimes[3], arrTimes[3];
	int total = 0;
	int mini = 10000;
	int maxi = 0;


	// get prices
	scanf_s("%d %d %d", &prices[0], & prices[1], &prices[2]);

	// get intervals
	for (int i = 0; i < 3; i++) {
		scanf_s("%d %d", &arrTimes[i], &depTimes[i]);
		mini = min(mini, arrTimes[i]);
		maxi = max(maxi, depTimes[i]);
	}

	for (int i = mini; i <= maxi; i++) {
		int parked = 0;

		for (int j = 0; j < 3; j++) {
			parked += (i >= arrTimes[j]) && (i < depTimes[j]);
		}

		total += parked * prices[parked - 1];
	}

	printf("%d", total);
}