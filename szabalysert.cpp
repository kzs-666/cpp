#include <iostream>

using namespace std;

int main() {
    int db = 0, meres[100000], current = 1;
    int sertett = -1;
    do {
        cin >> current;
        if (current != 0) {
            meres[db] = current;
        }
        if (current > 100) {
            sertett = db + 1;
        }
        db++;
    } while (current != 0);

    cout << sertett << endl;

    return 0;
}
