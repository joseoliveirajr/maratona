#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){ _
 
	int t;
	cin >> t;
 
	int n;
	for (int i = 0; i < t; i++) {
		cin >> n;
		if (n % 2 == 0) {
			cout << (n / 2) << endl;
		} else {
			cout << (1 + (n - 3) / 2) << endl;
		}
	}
	
	return 0;
}