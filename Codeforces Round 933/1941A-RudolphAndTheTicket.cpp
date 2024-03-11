#include <iostream>

using namespace std;

int main() {
    int test, left, right, max, leftCoins[101], rightCoins[101], combinations[101];
    cin >> test;

    for (int i = 0; i < test; i++) {
        cin >> left >> right >> max;
        combinations[i] = 0;

        for (int l = 0; l < left; l++) {
            cin >> leftCoins[l];
        }
        for (int r = 0; r < right; r++) {
            cin >> rightCoins[r];
        }

        for (int l = 0; l < left; l++) {
            for (int r = 0; r < right; r++) {
                if (leftCoins[l] + rightCoins[r] < max) {
                    combinations[i]++;
                }
            }
        }
    }

    for (int i = 0; i < test; i++) {
        cout << combinations[i] << endl;
    }

    return 0;
}
