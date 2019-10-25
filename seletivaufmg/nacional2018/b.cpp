#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main() { _
    int ids[100010];
    int quant = 0;
    int n, l;
    cin >> n >> l;
    for (int i = 0; i < n; i++) {
        ids[i] = 0;
    }
    int id, x;
    for (int i = 0; i < l; i++) {
        cin >> id >> x;
        if (ids[id] == 0 && x == 1) {
            ids[id] = 1;
            quant++;
        } else if (ids[id] == 1 && x == 0) {
            ids[id] = 0;
            quant--;
        }
    }
    cout << quant << endl;
    return 0;
}