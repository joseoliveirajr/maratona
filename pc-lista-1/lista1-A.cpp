#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int numCiclos(int t) {
	int count = 1;
	while (t != 1) {
		if (t % 2 == 1) {
			t = 3 * t + 1;
		} else {
			t = t / 2;
		}
		count++;
	}
	return count;
}

int main(){ _
	int i, j;
	int maior = 0;
	int temp;
	int ciclos;
	while (scanf("%i %i", &i, &j) == 2) {
		printf("%i %i ", i, j);
		if (i > j) {
			temp = i;
			i = j;
			j = temp;
		}
		for (int a = i; a <= j; a++) {
			ciclos = numCiclos(a);
			if (maior < ciclos) {
				maior = ciclos;
			}
		}
		printf("%i\n", maior);
		maior = 0;
	}
	
	return 0;
}