#include <bits/stdc++.h>
 
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 
typedef long long ll;
typedef pair<int, int> ii;
 
int main() { _
 
	int a, b;
	cin >> a >> b;
	
	if (a > b)
		cout << "Guida" << endl;
	else if (a < b)
		cout << "Guido" << endl;
	else
		cout << "Empate" << endl;
	
	exit(0);
}