#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){ _
 
    int numDif, numProbl;
    cin >> numDif >> numProbl;
 
    int roundAtual = 1;
 
    int rounds[100010];
    int pool[100010];
    for (int i = 0; i < 100010; i++) {
        rounds[i] = 0;
        pool[i] = 0;
    }
 
    int difProblAtual;
    for (int i = 0; i < numProbl; i++) {
        cin >> difProblAtual;
        pool[difProblAtual]++;
        rounds[pool[difProblAtual]]++;
        if (rounds[roundAtual] == numDif) {
            cout << 1;
            roundAtual++;
        } else {
            cout << 0;
        }
    }
 
    cout << endl;
	
	return 0;
}