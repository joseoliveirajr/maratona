#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ _
  string s;
  int n = 0;
	while (getline(cin, s)) {
    for (int i = 0; i < s.size(); i++) {
      if (isdigit(s[i])) {
        n += s[i] - '0';
      } else if (s[i] == 'b') {
        cout << string(n, ' ');
        n = 0;
      } else if (s[i] == '!') {
        cout << '\n';
      } else {
        cout << string(n, s[i]);
        n = 0;
      }
    }
    cout << '\n';
  }
	return 0;
}