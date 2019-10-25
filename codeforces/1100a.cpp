#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){ _
	
    int n, k;
    int tabs[110];
    int e = 0, s = 0;
    int diff = 0;
 
    cin >> n >> k;
 
    for (int i = 1; i <= n; i++) {
        cin >> tabs[i];
        if (tabs[i] == 1) e++;
        else s++;
    }
 
    int closedE, closedS;
    for (int i = 1; i <= k; i++) {
        closedE = 0;
        closedS = 0;
        for (int j = i; j <= n; j = j + k) {
            if (tabs[j] == 1) closedE++;
            else closedS++;
        }
        diff = max(diff, abs((e - closedE) - (s - closedS)));
    }
 
    cout << diff << endl;
 
	return 0;
}