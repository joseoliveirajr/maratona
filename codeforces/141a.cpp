#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ _
	string a, b, c;
    cin >> a >> b >> c;
    string d = a + b;
    sort(d.begin(), d.end());
    sort(c.begin(), c.end());
    if (c == d) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
	return 0;
}