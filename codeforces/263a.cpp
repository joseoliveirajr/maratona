#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){ _
	
    int x, y;
    int b;
 
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> b;
            if (b == 1) {
                cout << abs(i - 3) + abs(j - 3) << endl;
            }
        }
    }
 
	return 0;
}