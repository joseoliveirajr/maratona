#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){ _
 
	int n;
	string s;
 
	cin >> n >> s;
 
	char c = s[0];
	int count = 0;
	for (int i = 1; i < n; i++) {
		if (s[i] == c) {
			count++;
		} else {
			c = s[i];
		}
	}
 
	cout << count << endl;
	
	return 0;
}