#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

auto min(vector<int> &a) {
    int m = *(a.begin());
    auto p = a.begin();
    for (auto it = a.begin() + 1; it != a.end(); it++) {
        if (*it <= m) {
           p = it;
           m = *it;
        }
    }
    return p;
}

auto max(vector<int> &a) {
    int m = *(a.begin());
    auto p = a.begin();
    for (auto it = a.begin() + 1; it != a.end(); it++) {
        if (*it > m) {
           p = it;
           m = *it;
        }
    }
    return p;
}

int main(){ _

    int n;

    vector<int> a;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        a.push_back(v);
    }

    if (min(a) == max(a)) {
        cout << 0 << endl;
        return 0;
    }

    int ans = (a.end() - 1 - min(a)) + (max(a) - a.begin());

    if (min(a) < max(a)) {
        ans--;
    }

    cout << ans << endl;

    return 0;
}