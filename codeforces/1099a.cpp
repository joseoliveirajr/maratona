#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main() { _
	
	int w, h, u1, d1, u2, d2;
 
	int p1, p2, p3;
 
	cin >> w >> h >> u1 >> d1 >> u2 >> d2;
 
	int temp;
	if (d1 < d2) {
		swap(u1, u2);
		swap(d1, d2);
	}
 
	while (h != d1) {
		w += h;
		h--;
	}
	w = w + h - u1;
	h--;
	if (w < 0) w = 0;
	while (h != d2) {
		w += h;
		h--;
	}
	w = w + h - u2;
	h--;
	if (w < 0) w = 0;
	while (h != 0) {
		w += h;
		h--;
	}
	cout << w << endl;
 
	return 0;
}