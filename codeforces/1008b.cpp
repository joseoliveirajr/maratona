#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

// Time limit exceeded on pretest 10

int main(){ _

    int base;
    int w, h;
    int n;

    cin >> n;
    cin >> w >> h;
    base = max(w, h);
    
    for (int i = 1; i < n; i++) {
        cin >> w >> h;
        if (w > base && h > base) {
            cout << "NO" << endl;
            return 0;
        } else if (w > base) {
            h = base;
        } else if (h > base) {
            w = base;
        } else {
            base = max(w, h);
        }
    }
    cout << "YES" << endl;
	
	return 0;
}