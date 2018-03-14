#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

string s;

int main(){ _
  int state = 1;
  char c;
  while(cin.get(c)) {
    if (c == '"') {
      if (state) {
        cout << "``";
        state = 0;
      } else {
        cout << "''";
        state = 1;
      }
    } else {
      cout << c;
    }
  }
  return 0;
}