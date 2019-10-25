#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<int> vi;
 
bool compare(pii i, pii j) {
    if (i.first == j.first) {
        return i.second > j.second;
    } else {
        return i.first < j.first;
    }
}
 
int main(){ _
 
    int n, m;
    cin >> n >> m;
 
    vpii v;
    int l, r;
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        v.push_back(pii(l, r));
    }
 
    sort(v.begin(), v.end(), compare);
 
    int count = 0;
    vi w;
    bool found;
    for (int i = 1; i <= m; i++) {
        found = false;
        for (int j = 0; j < n; j++) {
            if (i == v[j].first || (i > v[j].first && i <= v[j].second)) {
                found = true;
                break;
            }
        }
        if (!found) {
            count++;
            w.push_back(i);
        }
    }
 
    cout << count << endl;
    for (int i = 0; i < count; i++) {
        cout << w[i] << " ";
    }
    cout << endl;
 
    return 0;
}