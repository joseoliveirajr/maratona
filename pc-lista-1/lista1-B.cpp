#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

#define NO_MATCH 0

int isSlump(char *s, int p) {
    if (s[p] != 'D' && s[p] != 'E') {
        return NO_MATCH;
    }
    p++;
    if (s[p] != 'F') {
        return NO_MATCH;
    }
    while (s[p] == 'F') {
        p++;
    }
    if (s[p] == 'G') {
        return p;
    } else {
        return isSlump(s, p);
    }
}

int isSlimp(char* s, int p) {
    if (s[p] != 'A') {
        return NO_MATCH;
    }
    p++;
    if (s[p] == 'H') {
        return p;
    } else if (s[p] == 'B') {
        p++;
        p = isSlimp(s, p);
        if (p == NO_MATCH) {
            return NO_MATCH;
        } else {
            p++;
            if (s[p] == 'C') {
                return p;
            }
        }
    } else {
        p = isSlump(s, p);
        if (p == NO_MATCH) {
            return NO_MATCH;
        } else if (s[p+1] == 'C') {
            return p + 1;
        } else {
            return NO_MATCH;
        }
    }
}

int isSlurpy(char* s) {
    int p = 0;
    p = isSlimp(s, p);
    if (p == NO_MATCH) {
        return NO_MATCH;
    } else {
        p++;
        p = isSlump(s, p);
        if (s[p + 1] == '\0') {
            return p;
        } else {
            return NO_MATCH;
        }
    }
}

int main(){ _
	int n;
    char s[70];
    scanf("%i", &n);
    printf("SLURPYS OUTPUT\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        if (isSlurpy(s) == NO_MATCH) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    printf("END OF OUTPUT\n");
	return 0;
}