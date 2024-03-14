#include <bits/stdc++.h>
using namespace std;

int main() {
	int teszt, hossz;
	string s;
	vector<int> valasz;

	cin >> teszt;

	for (int i = 0; i < teszt; i++) {
		cin >> hossz;
		cin >> s;
		valasz.push_back(0);

		for (int c = 0; c < hossz - 2; c++) {
			string temp;
			if (c <= hossz - 5) {
				temp = s.substr(c, 5);
				if (temp == "mapie") {
					valasz[i]++;
					c+=3;
					continue;
				}
			}
			temp = s.substr(c, 3);
			if (temp == "map" || temp == "pie") {
				valasz[i]++;
			}
		}
		cout << valasz[i] << "\n";
	}

	return 0;
}
