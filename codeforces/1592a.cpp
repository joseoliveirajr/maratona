#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back

typedef long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _
    int t;
    cin >> t;

    int n, H;
    int a_;
    vector<int> a;

    for (int i = 0; i < t; i++) {
        a.clear();
        cin >> n >> H;
        for (int j = 0; j < n; j++) {
            cin >> a_;
            a.push_back(a_);
        }
        sort(a.begin(), a.end(), greater<int>());

        int q = H / (a[0] + a[1]);
        int r = H - q * (a[0] + a[1]);
        if (r == 0) {
            cout << q * 2 << endl;
        } else if (r <= a[0]) {
            cout << q * 2 + 1 << endl;
        } else {
            cout << q * 2 + 2 << endl;
        }
    }

	exit(0);
}