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
        int odds = 0;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            if (x % 2 == 1) {
                odds++;
            }
            a.push_back(x);
        }

        if (odds % 2 == 1 || odds < n && odds > 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
	
	return 0;
}