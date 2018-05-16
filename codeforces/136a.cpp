#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ _
	int v[110], w[110];
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        w[v[i]] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << w[i] << " ";
    }
    cout << endl;
	return 0;
}