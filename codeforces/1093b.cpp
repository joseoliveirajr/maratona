#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){ _
 
	int t;
	cin >> t;
 
	string s;
	for (int i = 0; i < t; i++) {
		cin >> s;
		char c = s[0];
		bool notEqual = false;
		for (int j = 1; j < s.size(); j++) {
			if (s[j] != c) {
				notEqual = true;
				break;
			}
		}
		if (notEqual) {
			sort(s.begin(), s.end());
			cout << s << endl;
		} else {
			cout << "-1" << endl;
		}
		
	}
	
	return 0;
}