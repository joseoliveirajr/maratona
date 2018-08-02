#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

// Time limit exceeded on test 4

int main(){ _
	string s;
    cin >> s;

    bool swaped = true;
    while (swaped) {
        swaped = false;
        for (int i = 0; i < s.length() - 1; i++) {
            if ((s[i] == '1' && s[i + 1] == '0') || (s[i] == '2' && s[i + 1] == '1')) {
                swap(s[i], s[i + 1]);
                swaped = true;
                break;
            }
        }
    }

    cout << s << endl;

	return 0;
}