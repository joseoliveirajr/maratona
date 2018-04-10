#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

string s;
int d;
int damage;

bool hack() {
    //cout << "Start: " << s;
    for (int i = s.size() - 1; i > 0; i--) {
        if (s[i] == 'S' && s[i - 1] == 'C') {
            s[i] = 'C';
            s[i - 1] = 'S';
            //cout << " - End: " << s << endl;
            return true;
        }
    }
    return false;
}

int getDamage() {
    int cd = 1;
    int td = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'C') {
            cd *= 2;
        } else {
            td += cd;
        }
    }
    return td;
}

int main(){ _
    int numCases;
    int hacks;
    cin >> numCases;
    int currentDamage;
    bool imp;
    for (int i = 0; i < numCases; i++) {
        cout << "Case #" << i + 1 << ": ";
        cin >> d >> s;
        hacks = 0;
        imp = false;
        while (getDamage() > d) {
            if (!hack()) {
                cout << "IMPOSSIBLE" << endl;
                imp = true;
                break;
            }
            //cout << "Hacking..." << endl;
            hacks++;
        }
        if (!imp) {
            cout << hacks << endl;
        }
    }
	return 0;
}