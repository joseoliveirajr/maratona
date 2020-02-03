#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ _
    int t;
    int n, k;
    int r;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> k;
        r = n % k;
        if (r == 0) {
            cout << n << endl;
        } else {
            cout << n / k * k + min(k / 2, r) << endl;
        }
    }
	return 0;
}