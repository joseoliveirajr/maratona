#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main() { _
 
    int n;
    int maxW = 0, maxH = 0;
    int w, h;
    char c;
 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c >> h >> w;
        if (h > w) {
            swap(h, w);
        }
        if (c == '+') {
            maxW = max(maxW, w);
            maxH = max(maxH, h);
        } else {
            if (h >= maxH && w >= maxW) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
 
	return 0;
}