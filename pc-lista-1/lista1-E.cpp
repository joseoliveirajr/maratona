#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef vector<int> Vi;

int test (int i, int numRegions) {
    Vi vi;
    int stopedAt = 0;
    int mod = 0;
    for (int j = 2; j <= numRegions; j++) {
        vi.push_back(j);
    }
    while (vi.size() != 1) {
        mod = (mod + i - 1) % vi.size();
        vi.erase(vi.begin() + mod);
    }
    return vi[0] == 13;
}

int main(){ _
    int numRegions;
    cin >> numRegions;
    bool found;
    int start;
    int i;
    while (numRegions != 0) {
        found = false;
        i = 1;
        while(!found || i == 100) {
            start = test(i, numRegions);
            if (start) {
                cout << i << endl;
                found = true;
            }
            i++;
        }
        cin >> numRegions;
    }
    
	
	return 0;
}