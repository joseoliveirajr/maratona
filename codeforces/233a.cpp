#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){ _
 
	int n;
	cin >> n;
 
	if (n % 2 == 1) {
		cout << -1 << endl;
	} else {
		for (int i = 1; i <= n; i++) {
			if (i % 2 == 1) {
				cout << i + 1 << " ";
			} else {
				cout << i - 1 << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}