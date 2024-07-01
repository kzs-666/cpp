// https://atcoder.jp/contests/abc280/tasks/abc280_b

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t;
	vector<int> s, a, p;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> t;
		s.push_back(t);
	}

	p.push_back(0);
	a.push_back(0);
	a.push_back(s[0]);
	for (int i = 1; i < n; i++) {
		p.push_back( p[i - 1] + a[i] );
		a.push_back( s[i] - p[i] );
	}

	for (int i = 1; i < (n + 1); i++) {
		cout << a[i] << ' ';
	}

	return 0;
}
