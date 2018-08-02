#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ _

	int n, k;
	string s;

	cin >> n >> k >> s;

    sort(s.begin(), s.end());

	int used = 1;
    int weight = (int) s[0] - 96;
    char last = s[0];

    if (k == 1) {
        cout << weight << endl;
        return 0;
    }
	
    for (int i = 1; i < n; i++) {
        if (s[i] - last > 1) {
            used++;
            weight += (int) s[i] - 96;
            last = s[i];
            if (used == k) {
                cout << weight << endl;
                return 0;
            }
        }
    }
	
    cout << -1 << endl;
	return 0;
}