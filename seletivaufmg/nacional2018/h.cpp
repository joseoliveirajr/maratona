#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main() { _
    float a, b;
    cin >> a >> b;
    
    a = a/2;
    b = b/2;
    
    int f = floor(a) + floor(b);
    if (f % 2 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}