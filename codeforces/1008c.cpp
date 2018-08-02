#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

// Time limit exceeded on pretest 10

#define USED 0
#define NOT_USED 1

int n;
int a[100010];
int sorted[100010];
int z[100010];

bool compare(int i, int j) {
    return i > j;
}

int put(int i) {
    int maximo = 0;
    int index = -1;
    for (int j = 0; j < n; j++) {
        if (sorted[i] > a[j] && a[j] > maximo && z[j] == NOT_USED) {
            maximo = a[j];
            index = j;
        }
    }
    return index;
}

int main(){ _
	
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sorted[i] = a[i];
        z[i] = NOT_USED;
    }

    sort(sorted, sorted + n, compare);

    int tv = 0;

    for (int i = 0; i < n; i++) {
        int index = put(i);
        if (index != -1) {
            z[index] = USED;
            tv++;
        } else {
            cout << tv << endl;
            return 0;
        }
    }

	return 0;
}