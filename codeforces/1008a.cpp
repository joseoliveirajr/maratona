#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

bool isVowel(char a) {
    if (a == 'a' || a == 'o' || a == 'u' || a == 'i' || a == 'e') {
        return true;
    }
    return false;
}

int main(){ _
    string s;

    cin >> s;

    int i = 0;
    while (true) {
        if (i >= s.length()) {
            cout << "YES" << endl;
            return 0;
        } else if (isVowel(s[i]) || s[i] == 'n') {
            i++;
        } else if (!isVowel(s[i]) && s[i] != 'n') {
            i++;
            if (i >= s.length() || !isVowel(s[i])) {
                cout << "NO" << endl;
                return 0;
            } else {
                i++;
            }
        }
    }
	
	return 0;
}