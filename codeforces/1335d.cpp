#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back

typedef long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

string s[9];

void change(int l, int c) {
    if (s[l][c] == '1') {
        s[l][c] = '9';
    } else {
        s[l][c] = '1';
    }
}

int main(){ _
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> s[j];
        }
        change(0, 0);
        change(1, 3);
        change(2, 6);
        change(3, 1);
        change(4, 4);
        change(5, 7);
        change(6, 2);
        change(7, 5);
        change(8, 8);
        for (int j = 0; j < 9; j++) {
            cout << s[j] << endl;
        }
    }
    
	exit(0);
}