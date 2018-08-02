#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

// Wrong answer on test 11

int main(){ _
	
    int n;
    int d[200010];
    int p1, p3;
    long long int s1 = 0, s3 = 0;

    cin >> n;
    p1 = 0;
    p3 = n - 1;


    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }

    long long int max;

    s1 += d[p1];
    s3 += d[p3];
    while (p1 <= p3) {
        if (s1 == s3) {
            max = s1;
            p1++;
            s1 += d[p1];
            p3--;
            s3 += d[p3];
        } else if (s1 < s3) {
            p1++;
            s1 += d[p1];
        } else {
            p3--;
            s3 += d[p3];
        }
    }

    cout << max << endl;

	return 0;
}