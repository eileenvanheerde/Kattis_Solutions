#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>


using namespace std;

int main() {
	int customers;
	map <string, vector<string>> fOrds;
	string ln;

	for (;;) {
		cin >> customers;
		cin.ignore();

		if (customers == 0) { break; }

		fOrds.clear();

		for (int i = 0; i < customers; i++) {
			getline(cin, ln);
			stringstream ss(ln);
			string name, temp;

			ss >> name;

			while (ss >> temp) {
				fOrds[temp].push_back(name);
			}
		}

		for (auto v : fOrds) {
			cout << v.first << " ";

			sort(v.second.begin(), v.second.end());
			for (auto elem : v.second) {
				cout << elem << " ";
			}

			cout << endl;
		}


		cout << endl;
	}


}