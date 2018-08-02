#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ _

    int n, m;
    int c[1010];
    int a[1010];
    int maxim = 0;

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    int aIndex = 0;

    for (int cIndex = 0; cIndex < n; cIndex++) {
        if (a[aIndex] >= c[cIndex] && aIndex < m) {
            maxim++;
            aIndex++;
        }
    }
    
    cout << maxim << endl;
	
	return 0;
}