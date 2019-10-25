#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){ _
 
    string s;
    cin >> s;
 
    int as = 0;
    int size = s.size();
    for (int i = 0; i < size; i++) {
        if (s[i] == 'a') {
            as++;
        }
    }
 
    if (as > size / 2) {
        cout << size << endl;
    } else {
        cout << size - ((size - as) - as + 1) << endl;
    }
	
	return 0;
}