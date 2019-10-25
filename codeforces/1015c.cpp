#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
bool compare(long long int i, long long int j) {
    return i > j;
}
 
int main(){ _
 
    long long int n, m;
    cin >> n >> m;
 
    vector<long long int> diffs;
    long long int a, b;
    long long int total = 0;
    for (long long int i = 0; i < n; i++) {
        cin >> a >> b;
        total += a;
        diffs.push_back(a - b);
    }
 
    if (total <= m) {
        cout << 0 << endl;
        return 0;
    }
 
    sort(diffs.begin(), diffs.end(), compare);
 
    for (long long int i = 0; i < n; i++) {
        total -= diffs[i];
        if (total <= m) {
            cout << (i + 1) << endl;
            return 0;
        }
    }
 
    cout << -1 << endl;
 
    return 0;
}