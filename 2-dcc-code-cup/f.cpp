#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main() { _
    long long int v[1000100];
    int size;
    cin >> size;
    int i, j;
    for (i = 0; i < size; i++)
        cin >> v[i];
    
    for (i = 0; i < size; i++) {
        int x = v[i];
        for (j = i + 1; j < size; j++) {
            x = x ^ v[j];
            if (x == 0) {
                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }
    cout << "-1" << endl;
    return 0;
}