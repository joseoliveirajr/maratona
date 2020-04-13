#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ _
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int s;
        cin >> s;
        int spentTotal = 0;
        int spentNow;
        int cashback;
        while (s >= 10) {
            spentNow = s / 10 * 10;
            cashback = s / 10;

            s = s - spentNow + cashback;
            spentTotal += spentNow;
        }
        spentTotal += s;
        cout << spentTotal << endl;
    }
	
	return 0;
}