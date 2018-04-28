#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int quantFat(long long int x) {
    if (x == 1) {
        return 0;
    }
    if (x == 2) {
        return 1;
    }
    long long int x_ = x;
    int q = 0;
    for (int i = 2; i <= sqrt(x_); i++) {
        while (x % i == 0) {
            x = x/i;
            q++;
        }
    }
    if (x != 1) {
        q++;
    }
    return q;
}

int main() { _
    long long int n, m;
    cin >> n >> m;
    int qm = quantFat(m);
    int qn = quantFat(n);
    if (qn <= qm) {
        cout << "mich" << endl;
    } else {
        cout << "np" << endl;
    }
    return 0;
}