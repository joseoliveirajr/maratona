#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main() { _
 
    int q;
    int l, r, d;
 
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> l >> r >> d;
        if (d < l) {
            cout << d << endl;
        } else {
            if (r % d == 0) {
                cout << r + d << endl;
            } else {
                cout << (r / d + 1) * d << endl;
            }
        }
    }
 
	return 0;
}