#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){ _
	
    string s;
 
    cin >> s;
 
    int i = 0;
    while (i < s.size()) {
        if (s[i] == '.') {
            cout << '0';
        } else {
            i++;
            if (s[i] == '.') {
                cout << '1';
            } else {
                cout << '2';
            }
        }
        i++;
    }
    cout << endl;
 
	return 0;
}