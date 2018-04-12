#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ _
    double n, p, a = 0;
	cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p;
        a += p / n;
    }
    cout << setprecision(12) << a << endl;
	return 0;
}