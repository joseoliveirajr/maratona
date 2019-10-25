#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
bool isPrime(int n) {
	for (int i = 2; i < n - 1; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
 
int findNextPrime(int n) {
	n++;
	while (true) {
		if (isPrime(n)) {
			return n;
		} else {
			n++;
		}
	}
}
 
int main(){ _
	
	int n, m;
	cin >> n >> m;
 
	int n0 = findNextPrime(n);
 
	if (n0 == m) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
 
	return 0;
}