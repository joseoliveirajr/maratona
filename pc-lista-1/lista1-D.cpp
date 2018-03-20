#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){ _
	int numPeople, cash[15], value, divideBy;
    string person;
    map<string, int> personKey;
    map<int, string> keyPerson;
    bool first = true;
    while (cin >> numPeople) {
        if (first) {
            first = false;
        } else {
            cout << endl;
        }
        // cout << "--NUMPEOPLE " << numPeople << endl;
        for (int i = 0; i < numPeople; i++) {
            cin >> person;
            keyPerson[i] = person;
            personKey[person] = i;
            cash[i] = 0;
            // cout << "--LEU " << person << endl;
        }
        for (int i = 0; i < numPeople; i++) {
            cin >> person >> value >> divideBy;
            // cout << "person: " << person << endl;
            // cout << "value: " << value << endl;
            // cout << "divideBy: " << divideBy << endl;
            if (divideBy != 0) {
                cash[personKey[person]] += - value + (value % divideBy);
                for (int j = 0; j < divideBy; j++) {
                    cin >> person;
                    // cout << "--" << person << " antes tinha " << cash[personKey[person]] << endl;
                    cash[personKey[person]] += value / divideBy;
                    // cout << "--" << person << " agora tem " << cash[personKey[person]] << endl;
                }
            }
        }
        for (pair<int, string> p : keyPerson) {
            cout << p.second << ' ' << cash[p.first] << endl;
        }
        keyPerson.clear();
        personKey.clear();
    }
	return 0;
}