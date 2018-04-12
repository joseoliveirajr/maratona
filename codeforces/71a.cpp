#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ _
	int n;
    string s;
    cin >> n;
    int last, size;
    for (int i = 0; i < n; i++) {
        cin >> s;
        size = s.size();
        if (size > 10) {
            last = s.size() - 1;
            cout << s[0] << (size - 2) << s[last] << endl;
        } else {
            cout << s << endl;
        }
    }
	return 0;
}