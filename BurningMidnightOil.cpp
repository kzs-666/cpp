// https://codeforces.com/contest/165/problem/B

#include <bits/stdc++.h>
using namespace std;

bool check(int v, int n, int k) {
	bool ok = 0;
	int pow = 1, sum = 0;

	while (((v / pow) > 0) && (sum <= n)) {
		sum += (v / pow);
		pow *= k;
	}
	
	if (sum >= n)
		ok = 1;
	
	return ok;
}

int main() {
	int n, k, b, j, mid;

	cin >> n >> k;
	b = k;
	j = n;

	while (b < (j - 1)) {
		mid = (b + j) / 2;
		if (check(mid, n, k))
			j = mid;
		else
		 	b = mid;
	}

	cout << j;

	return 0;
}
