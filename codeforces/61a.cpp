#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){ _
 
	string s, t;
 
	cin >> s >> t;
 
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == t[i]) {
			cout << 0;
		} else {
			cout << 1;
		}
	}
 
	cout << endl;
	
	return 0;
}