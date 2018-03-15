#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int gcd(int a, int b) {
	while(true) {
		if (a > b) {
			a -= b;
		} else if (a < b) {
			b -= a;
		} else if (a == b) {
			return a;
		}
	}
}

int main(){ _
	int n, na, nb;
	string a, b;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		cin >> b;
		na = strtoull(a.c_str(), NULL, 2);
		nb = strtoull(b.c_str(), NULL, 2);
		if (gcd(na, nb) == 1) {
			cout << "Pair #" << i << ": Love is not all you need!" << endl;
		} else {
			cout << "Pair #" << i << ": All you need is love!" << endl;
		}
	}
	return 0;
}