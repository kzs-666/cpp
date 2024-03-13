#include <iostream>

using namespace std;

int main() {
    int hev, hho, hnap, tev, tho, tnap;
    int t, h, tv, th;
    cin >> tev >> tho >> tnap;
    cin >> hev >> hho >> hnap;

    tev--;
    tho--;
    hev--;
    if (hho == 0)
        hho = 18;
    else
        hho--;

    t = (tev * 260) + (tho * 20) + tnap;
    if (hho == 0)
        h = (hev * 365) + 360 + hnap;
    else
        h = (hev * 365) + (hho * 20) + hnap;

    // haab -> tzolkin (Y nap)
    tev = h / 260;
    h -= tev * 260;
    tho = h / 20;
    h -= tho * 20;
    tnap = h;
    tev++;
    tho++;

    // tzolkin -> haab (X nap)
    hev = t / 365;
    t -= hev * 365;
    hho = t / 20;
    if (hho == 18) {
        t -= hho * 20;
        hho = 0;
        hnap = t;
    }
    else {
        t -= hho * 20;
        hnap = t;
        hho++;
    }
    hev++;

    cout << hev << " " << hho << " " << hnap << "\n";
    cout << tev << " " << tho << " " << tnap;

    return 0;
}