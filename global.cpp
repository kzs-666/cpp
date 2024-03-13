#include <iostream>

using namespace std;

int main() {
	int evek, napok, hom = 0, db = 0;
	float atlag[1000], max = -41;
	cin >> evek >> napok;

	for (int i = 0; i < evek; i++) {
		for (int j = 0; j < napok; j++) {
			int temp;
			cin >> temp;
			hom += temp;
			db++;
		}
		atlag[i] = (float)hom / db;
		if (atlag[i] > max)
			max = atlag[i];
	}

	return 0;
}