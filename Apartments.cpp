// https://cses.fi/problemset/task/1084

#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, k, max = 0, t, v = 0, l = 0;
	vector<int> a, b;

	cin >> n >> m >> k;

	for (int i = 0; i < n; i++) {
		cin >> t;
		a.push_back(t);
	}
	sort(a.begin(), a.end());

	for (int i = 0; i < m; i++) {
		cin >> t;
		b.push_back(t);
	}
	sort(b.begin(), b.end());

	while ((l < m) && (v < n)) {
		if ((a[v] >= (b[l] - k)) && (a[v] <= (b[l] + k))) {
			max++;
			l++;
			v++;
		}
		else if (a[v] > (b[l] - k)) {
			l++;
		}
		else {
			v++;
		}
	}

	cout << max;

	return 0;
}
