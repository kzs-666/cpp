#include <iostream>

using namespace std;

int main() {
    int kor, potyi, potyik[10000], korok[10], x[10], y[10], r[10], a[10000], b[10000], kinn[10000], c = 0;
    cin >> kor >> potyi;
    for (int i = 0; i < kor; i++) {
        cin >> x[i] >> y[i] >> r[i];
    }
    for (int i = 0; i < potyi; i++) {
        cin >> a[i] >> b[i];
        for (int j = 0; j < kor; j++) {
            if ((pow(x[j] - a[i], 2) + pow(y[j] - b[i], 2)) < pow(r[j], 2)) {
                c++;
            }
        }
        kinn[i] = c;
        c = 0;
    }

    for (int i = 0; i < potyi; i++) {
        cout << kinn[i] << endl;
    }

    return 0;
}
