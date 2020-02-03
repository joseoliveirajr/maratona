#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ _

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        vector<int> a;

        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            a.push_back(x);
        }

        int lr = -1;
        int rl = n;

        for (lr = 0; lr < n; lr++) {
            if (a[lr] < lr) {
                break;
            }
        }
        lr--;

        for (rl = n - 1; rl >= 0; rl--) {
            if (a[rl] < n - rl - 1) {
                break;
            }
        }
        rl++;

        if (lr >= rl) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
	
	return 0;
}