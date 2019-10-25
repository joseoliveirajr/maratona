#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 
typedef long long ll;
typedef pair<int, int> ii;
 
int d[366];
int n;
 
int main() { _
 
	cin >> n;
	for (int i = 0; i < 366; i++) {
		d[i] = 0;
	}
 
	int a;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (d[a] == 1) {
			cout << "S" << endl;
			exit(0);
		} else {
			d[a]++;
		}
	}
	
	cout << "N" << endl;
	
	exit(0);
}