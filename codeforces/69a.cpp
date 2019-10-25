#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){ _
	
    int n;
    int x = 0, y = 0, z = 0;
    int _x, _y, _z;
 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> _x >> _y >> _z;
        x += _x;
        y += _y;
        z += _z;
    }
 
    if (x == 0 && y == 0 && z == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
 
	return 0;
}