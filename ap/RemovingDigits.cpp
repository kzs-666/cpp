// https://cses.fi/problemset/task/1637

#include <bits/stdc++.h>
#include <string>
using namespace std;

int m(int n) {
	int max = 0, a;
	string num = to_string(n);

	for (int i = 0; i < num.length(); i++)  {
		a = num[i] - '0';
		if (a > max)
			max = a;
	}

	return max;
}

int main() {
	int n, s = 0;

	cin >> n;

	while (n > 0) {
		n -= m(n);
		s++;
	}

	cout << s;

	return 0;
}
