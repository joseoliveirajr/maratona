#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main() { _
    double d, a, b;
    cin >> d >> a >> b;
    double dr = pow(pow(a, 2) + pow(b, 2), 1./2);
    if (dr <= d) cout << "Sim" << endl;
    else cout << "Nao" << endl;
    return 0;
}