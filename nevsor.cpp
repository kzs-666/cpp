#include <iostream>
#include <string>

using namespace std;

int main() {
    int db;
    string vnev[10000], knev[10000], nev[10000];

    cin >> db;
    for (int i = 0; i < db; i++) {
        cin >> vnev[i] >> knev[i];
        nev[i] = vnev[i] + " " + knev[i];
    }

    for (int i = 0; i < db - 1; i++) {
        for (int j = i + 1; j < db; j++) {
            for (int k = 0; k < min(nev[i].length(), nev[j].length()); k++) {
                if (nev[j][k] < nev[i][k]) {
                    string t = nev[i];
                    nev[i] = nev[j];
                    nev[j] = t;
                    break;
                }
                if (nev[j][k] == nev[i][k])
                    continue;
                if (nev[j][k] > nev[i][k])
                    break;
            }
        }
    }

    for (int i = 0; i < db; i++) {
        cout << i + 1 << " " << nev[i] << endl;;
    }

    return 0;
}
