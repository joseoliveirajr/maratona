#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ _
	int n, k;
    int y[2010];
    int a = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }
    sort(y, y + n);
    for (int i = 2; i < n; i += 3) {
        if (y[i] + k <= 5) {
            a++;
        }
    }
    cout << a;
	return 0;
}