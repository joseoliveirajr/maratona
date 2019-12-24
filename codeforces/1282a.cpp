#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ _
    
	int t;
	int a, b, c, r;
	int r1, r2;
	int unav;
	int temp;

	cin >> t;
	
	for (int i = 0; i < t; i++) {

		cin >> a >> b >> c >> r;
		r1 = c - r;
		r2 = c + r;

		if (a > b) {
			temp = a;
			a = b;
			b = temp;
		}

		unav = b - a;

		if (r1 <= a) {
			if (r2 <= a) {
				unav -= 0;
			} else if (r2 <= b) {
				unav -= r2 - a;
			} else {
				unav -= b - a;
			}
		} else if (r1 <= b) {
			if (r2 <= b) {
				unav -= r2 - r1;
			} else {
				unav -= b - r1;
			}
		}

		cout << unav << endl;
	}

	return 0;
}