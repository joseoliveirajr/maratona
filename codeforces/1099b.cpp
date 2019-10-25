#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
bool isPerfectSquare(int n) {
	int s = floor(sqrt(n));
	if (s * s == n) {
		return true;
	} else {
		return false;
	}
}
 
int main(){ _
	
	int n;
 
	cin >> n;
 
	if (isPerfectSquare(n)) {
		cout << sqrt(n) * 2 << endl;
	} else {
		if (n - pow(floor(sqrt(n)), 2) <= ceil(sqrt(n)) - 1) {
			cout << ceil(sqrt(n)) * 2 - 1 << endl;
		} else {
			cout << ceil(sqrt(n)) * 2 << endl;
		}
	}
 
	return 0;
}