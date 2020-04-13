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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> a;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
        sort(a.begin(), a.end());
        int maxCount = 0;
        int count = 0;
        int nSkills = 0;
        int currentSkill = 0;
        for (int j = 0; j < n; j++) {
            if (currentSkill != a[j]) {
                maxCount = max(count, maxCount);
                currentSkill = a[j];
                count = 1;
                nSkills++;
                
            } else {
                count++;
            }
        }
        maxCount = max(count, maxCount);
        if (maxCount == nSkills) {
            cout << maxCount - 1 << endl;
        } else {
            cout << min(maxCount, nSkills) << endl;
        }
    }

	exit(0);
}