#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){ _
 
    int q;
    cin >> q;
 
    int l1, r1, l2, r2;
    int ans1, ans2;
    for (int i = 0; i < q; i++) {
        cin >> l1 >> r1 >> l2 >> r2;
        ans1 = l1;
        if (l1 == l2) {
            ans2 = l2 + 1;
        } else {
            ans2 = l2;
        }
        cout << ans1 << " " << ans2 << endl;
    }
 
	return 0;
}