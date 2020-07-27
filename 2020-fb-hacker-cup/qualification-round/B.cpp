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

int main(){ _

    int T, N;
    string s;
    int a, b;

    cin >> T;
    for (int i = 1; i <= T; i++) {
        cin >> N;
        cin >> s;
        a = 0;
        b = 0;
        for (int j = 0; j < N; j++) {
            if (s[j] == 'A') {
                a++;
            } else {
                b++;
            }
        }
        cout << "Case #" << i << ": ";
        if (abs(a - b) == 1) {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }

	exit(0);
}