#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ _
	
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int ans = 0;
    for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            ans++;
        }
    }

    cout << ans << endl;

	return 0;
}