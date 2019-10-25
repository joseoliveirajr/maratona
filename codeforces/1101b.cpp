#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){ _
 
	int n;
	cin >> n;
	int r = n % 4;
 
	if (r == 1 || r == 2) cout << 1 << endl;
	else cout << 0 << endl;
	
	return 0;
}
