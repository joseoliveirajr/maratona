#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main() { _
    int n, p1, p2;
    int v[1100];
    int d = 0;
    int g = 0;
    int m;
    cin >> n >> p1 >> p2;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m % p1 == 0) {
            d++;
        }
        if (m % p2 == 0) {
            g++;
        }
    }
    if (d > g)
        cout << "Dilsun" << endl;
    else if (g > d)
        cout << "Guinha" << endl;
    else if (g == d)
        cout << "Empatou" << endl;
    return 0;
}