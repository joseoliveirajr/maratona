#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

#define MAX 50010

// n = number of students (1 to n)
// m = number of cases

int v[MAX];
set<int> r;

void init(int n) {
    for (int i = 1; i <= n; i++) {
        v[i] = i;
    }
}

int find(int x) {
    if (v[x] == x) {
        return x;
    }
    int y = find(v[x]);
    v[x] = y;
    return y;
}

void unite(int i, int j) {
    i = find(i);
    j = find(j);
    v[j] = i;
}

int count(int n) {
    for (int i = 1; i <= n; i++) {
        r.insert(find(v[i]));
    }
    return r.size();
}

void print(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%*i", 2, i);
    }
    printf("\n");
    for (int i = 1; i <= n; i++) {
        printf("%*i", 2, v[i]);
    }
    printf("\n");
}

int main(){ _
	int n, m;
    scanf("%i %i", &n, &m);
    int c = 1;
    int i, j;
    while (n != 0 && m != 0) {
        init(n);
        for (int it = 0; it < m; it++) {
            scanf("%i %i", &i, &j);
            unite(i, j);
            //print(n);
        }
        printf("Case %i: %i\n", c++, count(n));
        r.clear();

        scanf("%i %i", &n, &m);
    }
	return 0;
}