#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ _

	int t;
	vector<int> c{0, 0, 0};

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> c[0] >> c[1] >> c[2];
		sort(c.begin(), c.end());
		if (c[2] > c[0] + c[1] + 1) {
			cout << "No" << endl;
		} else {
			cout << "Yes" << endl; 
		}
	}
	
	return 0;
}