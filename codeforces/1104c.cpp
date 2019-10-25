#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
 
 
int main(){ _
 
    int horizontalOptions[2][2] = {{1, 1}, {1, 3}};
    int verticalOptions[4][2] = {{2, 1}, {2, 2}, {2, 3}, {2, 4}};
 
    int currentH = 0;
    int currentV = 0;
 
    string s;
    cin >> s;
 
    for (long unsigned int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            cout << horizontalOptions[currentH][0] << " " << horizontalOptions[currentH][1] << endl;
            currentH = (currentH + 1) % 2;
        } else {
            cout << verticalOptions[currentV][0] << " " << verticalOptions[currentV][1] << endl;
            currentV = (currentV + 1) % 4;
        }
    }
 
	return 0;
}