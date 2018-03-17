#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

#define LOST 0
#define OK 1

typedef pair<int, int> Pii;
typedef set<Pii> List;

int x, y;
char d;
int r, c;
char s[110];
int p;
List l;

int walk() {
    char a = s[p];
    if (a == 'F') {
        if (d == 'N') {
            if (y + 1 == r + 1) {
                Pii newP (x, y);
                if (l.count(newP) == 0) {
                    l.insert(newP);
                    return LOST;
                }
            } else {
                y++;
            }
        } else if (d == 'S') {
            if (y - 1 == -1) {
                Pii newP (x, y);
                if (l.count(newP) == 0) {
                    l.insert(newP);
                    return LOST;
                }
            } else {
                y--;
            }
        } else if (d == 'E') {
            if (x + 1 == c + 1) {
                Pii newP (x, y);
                if (l.count(newP) == 0) {
                    l.insert(newP);
                    return LOST;
                }
            } else {
                x++;
            }
        } else if (d == 'W') {
            if (x - 1 == -1) {
                Pii newP (x, y);
                if (l.count(newP) == 0) {
                    l.insert(newP);
                    return LOST;
                }
            } else {
                x--;
            }
        }
    } else if (a == 'L') {
        if (d == 'N') d = 'W';
        else if (d == 'S') d = 'E';
        else if (d == 'E') d = 'N';
        else if (d == 'W') d = 'S';
    } else if (a == 'R') {
        if (d == 'N') d = 'E';
        else if (d == 'S') d = 'W';
        else if (d == 'E') d = 'S';
        else if (d == 'W') d = 'N';
    }
    return OK;
}

int main(){ _
    int losted;
    scanf("%i %i", &c, &r);
    while(scanf("%i %i %c", &x, &y, &d) == 3) {
        scanf("%s", s);
        p = 0;
        losted = false;
        while (s[p] != '\0') {
            if (walk() == LOST) {
                losted = true;
                break;
            }
            p++;
        }
        if (losted) {
            printf("%i %i %c LOST\n", x, y, d);
        } else {
            printf("%i %i %c\n", x, y, d);
        }
    }
	return 0;
}
