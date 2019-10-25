#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){ _
	
	long long int n;
	string s;
 
	cin >> n;
	cin >> s;
 
	char l = s[0];
	char r = s[n - 1];
 
	long long int num_l = 0, num_r = 0;
 
	if (l == r) { // O mesmo caractere
		for (long long int i = 0; i < n; i++) {
			if (s[i] != l) {
				break;
			} else {
				num_l++;
			}
		}
		if (num_l == n) { // Não tem espaço no meio
			cout << ((((n + 1) * n) / 2) % 998244353) << endl;
		} else { // Tem espaço no meio
			for (long long int i = n - 1; i >= 0; i--) {
				if (s[i] != r) {
					break;
				} else {
					num_r++;
				}
			}
			cout << (((num_l + 1) * (num_r + 1)) % 998244353) << endl;
		}
	} else { // Caractere diferente
		for (long long int i = 0; i < n; i++) {
			if (s[i] != l) {
				break;
			} else {
				num_l++;
			}
		}
		for (long long int i = n - 1; i >= 0; i--) {
			if (s[i] != r) {
				break;
			} else {
				num_r++;
			}
		}
		cout << (((num_l + 1) + (num_r + 1) - 1) % 998244353) << endl;
	}
 
	return 0;
}