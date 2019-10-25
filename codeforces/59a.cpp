#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
string a;
 
int main(){ _
	
	cin >> a;
 
	int l = 0, u = 0;
 
	for (int i = 0; i < a.size(); i++) {
		if (a[i] >= 'a' && a[i] <= 'z') {
			l++;
		} else {
			u++;
		}
	}
 
	for (int i = 0; i < a.size(); i++) {
		if (l >= u) {
			cout << (char) tolower(a[i]);
		} else {
			cout << (char) toupper(a[i]);
		}
	}
 
	return 0;
}