#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int findNextChar(string s, int start, int end, char c) {
    for (int i = start; i <= end; i++) {
        if (s[i] == c) {
            return i;
        }
    }
    return -1;
}
 
int main(){ _
 
    int n;
    string s, t;
    cin >> n >> s >> t;
 
    string ss(s), st(t);
    sort(ss.begin(), ss.end());
    sort(st.begin(), st.end());
    if (ss.compare(st) != 0) {
        cout << -1 << endl;
        return 0;
    }
 
    int pos;
    int qSwaps = 0;
    vector<int> swaps;
    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            pos = findNextChar(s, i, s.size() - 1, t[i]);
 
            while (s[i] != t[i]) {
                char temp = s[pos];
                s[pos] = s[pos - 1];
                s[pos - 1] = temp;
                qSwaps++;
                swaps.push_back(pos);
                pos--;
            }
        }
    }
 
    cout << qSwaps << endl;
    for (int i = 0; i < qSwaps; i++) {
        cout << swaps[i] << " ";
    }
    cout << endl;
 
    return 0;
}
