#include <iostream>
#include <string>

using namespace std;

int main() {
	int db, t = 0;
	string szamok[10000], megoldasok[10000];
	cin >> db;

	for (int i = 0; i < db; i++) {
		cin >> szamok[i];
		for (int j = 0; j < szamok[i].length(); j++) {
			t += pow(((szamok[i])[j] - '0'), szamok[i].length());
		}
		if (t == stoi(szamok[i]))
			megoldasok[i] = "Igen";
		else
			megoldasok[i] = "Nem";
	}

	for (int i = 0; i < db; i++) {
		cout << megoldasok[i] << endl;
	}

	return 0;
}
