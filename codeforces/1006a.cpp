#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ _

    int n;
    int a;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a % 2 == 1) {
            cout << a << " ";
        } else {
            cout << (a - 1) << " ";
        }
    }

    cout << endl;
	
	return 0;
}