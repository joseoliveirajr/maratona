#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ _
    int n, a, b, k;
    cin >> n >> a >> b >> k;
    vector<int> timesUsed;
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;

        int remain = h % (a + b);
        int fullRounds = h / (a + b);

        if (0 < remain && remain <= a) {
            timesUsed.push_back(0);
        } else if (remain == 0) {
            timesUsed.push_back(b / a + (b % a != 0));
        } else if (remain > a) {
            int d = h - fullRounds * (a + b) - a;
            timesUsed.push_back(d / a + (d % a != 0));
        }
    }

    // for (int i = 0; i < n; i++) {
    //     cout << timesUsed[i] << " ";
    // }
    // cout << endl;

    sort(timesUsed.begin(), timesUsed.end());

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (k - timesUsed[i] >= 0) {
            ans++;
            k -= timesUsed[i];
        } else {
            break;
        }
    }

    cout << ans << endl;


	
	return 0;
}