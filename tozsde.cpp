#include <iostream>
#include <string>

using namespace std;

int main() {
	int cegek, napok, nyereseg[750], zar1, zar2, t, max = 0, db = 0;
	string ceg[100], nyeresegesek = "";

	cin >> cegek >> napok;

	for (int i = 0; i < cegek; i++) {
		cin >> ceg[i] >> zar1;
		for (int j = 0; j < napok - 2; j++) {
			cin >> t;
		}
		cin >> zar2;
		nyereseg[i] = zar2 - zar1;

		if (nyereseg[i] > max) {
			max = nyereseg[i];
			nyeresegesek = ceg[i];
			db = 1;
		}
		else if (nyereseg[i] == max) {
			nyeresegesek += ", " + ceg[i];
			db++;
		}

	}

	cout << "#" << endl;
	cout << max << endl;
	cout << "#" << endl;
	cout << db << endl;
	cout << nyeresegesek << endl;

	return 0;
}
