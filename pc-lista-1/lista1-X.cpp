#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ _
	int n, na, nb;
	string a, b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		cin >> b;
		na = strtoull(a.c_str(), NULL, 2);
		nb = strtoull(b.c_str(), NULL, 2);
	}
	return 0;
}