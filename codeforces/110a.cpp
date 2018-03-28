#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

bool isLucky(int n) {
    string ns = to_string(n);
    int size = ns.size();
    for (int i = 0; i < size; i++)
        if (ns[i] != '4' && ns[i] != '7') return false;
    return true;
}

int main(){ _
	long long n;
    cin >> n;
    string ns = to_string(n);
    int size = ns.size();
    int count = 0;
    for (int i = 0; i < size; i++)
        if (ns[i] == '4' || ns[i] == '7') count++;
    if (isLucky(count))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
	return 0;
}