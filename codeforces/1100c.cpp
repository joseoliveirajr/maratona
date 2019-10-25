#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
 
int main(){ _
 
    double numCirculos, raioCirculoInterno;
    cin >> numCirculos >> raioCirculoInterno;
 
    double anguloInterno = (numCirculos - 2) * 180 / numCirculos;
 
    double k = cos(anguloInterno * (acos(-1) / 180) / 2) * raioCirculoInterno;
 
    cout << setprecision(7) << abs(((k * raioCirculoInterno) / (k - raioCirculoInterno))) << endl;
 
    return 0;
}