#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){ _
 
    int n;
    int v[110];
 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    sort(v, v + n);
 
    int p = 0;
    for (int i = 0; i < n; i += 2) {
        p += v[i + 1] - v[i];
    }
 
    cout << p << endl;
 
	return 0;
}