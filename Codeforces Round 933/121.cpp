#include <bits/stdc++.h>
using namespace std;

int main() {
	int teszt, elem;
	vector<int> szamok;
	cin >> teszt;

	for (int i = 0; i < teszt; i++) {
		cin >> elem;
		bool jo=1;
		szamok.clear();  // vector kiürítése beolvasás előtt
		for (int j = 0; j < elem; j++) {
			int t = 0;
			cin >> t;
			szamok.push_back(t);
		}
		for (int j = 1; j < elem - 1; j++) {
			if (szamok[j - 1] > 0) {
				int ertek = szamok[j - 1];
				szamok[j - 1] = 0;
				szamok[j] -= 2 * ertek;
				szamok[j + 1] -= ertek;  // mindegyiket annyival csökkentjük, amennyi a legelső nem 0 érték
			}
			if(szamok[j-1]<0 || szamok[j]<0 || szamok[j+1]<0){
				jo=0;
			}
		}
		if ((szamok[elem - 1] != 0 || szamok[elem-2]!=0) || jo==0)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	return 0;
}
