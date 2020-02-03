#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ _
    int t;
    int h, m;
    int ans;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> h >> m;
        ans = 60 - m + (23 - h) * 60;
        cout << ans << endl;
    }
	
	return 0;
}