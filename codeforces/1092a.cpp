#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){ _
 
    int t;
    cin >> t;
 
    int n, k;
    string s;
    int d, res;
    string c;
    for (int i = 0; i < t; i++) {
 
        cin >> n >> k;
        s = "";
 
        d = n / k;
        res = n - (d * k);
 
        for (int j = 0; j < k; j++) {
            for (int l = 0; l < d; l++) {
                c = 'a' + j;
                s.append(c);
            }
        }
        for (int j = 0; j < res; j++) {
            c = 'a' + j;
            s.append(c);
        }
 
        cout << s << endl;
 
    }
 
	return 0;
}