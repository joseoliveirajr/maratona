#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int n;
int v[100010];

int troubleSort() {
    bool done = false;
    int temp;
    while (!done) {
        done = true;
        for (int i = 0; i < n - 2; i++) {
            if (v[i] > v[i + 2]) {
                done = false;
                if (v[i] > v[i + 1]) {
                    return v[i + 1];
                }
                temp = v[i];
                v[i] = v[i + 2];
                v[i + 2] = temp;
            }
        }
        
    }
    return -1;
}

int main(){ _
    int testCases;
	cin >> testCases;
    int index;
    for (int i = 0; i < testCases; i++) {
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> v[j];
        }
        if (index = troubleSort() != -1) {
            cout << index << endl;
        } else {
            cout << "OK" << endl;
        }
    }
	return 0;
}