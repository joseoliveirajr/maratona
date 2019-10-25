#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int a[3][3];
 
void toggle(int i, int j) {
    if (a[i][j] == 0) {
        a[i][j] = 1;
    } else {
        a[i][j] = 0;
    }
}
 
void operate(int i, int j) {
    toggle(i, j);
    if (i > 0) {
        toggle(i - 1, j);
    }
    if (i < 2) {
        toggle(i + 1, j);
    }
    if (j > 0) {
        toggle(i, j - 1);
    }
    if (j < 2) {
        toggle(i, j + 1);
    }
}
 
int main(){ _
 
    int o[3][3];
 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            a[i][j] = 1;
        }
    }
 
    int c;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> c;
            o[i][j] = c % 2;
            if (o[i][j]) {
                operate(i, j);
            }
        }
    }
 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
 
	return 0;
}