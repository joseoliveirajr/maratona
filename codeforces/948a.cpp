#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int isImpossible (char a[510][510], int r, int c) {
    int i, j;

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] == '.') {
                continue;
            } else if (a[i][j] == 'S') {
                /*if (i-1 != -1) { //cima
                    printf("cima\n");
                    return 1;
                } else if (i+1 != r) { //baixo
                    printf("baixo\n");
                    return 1;
                } else if (j-1 != -1) { //esquerda
                    printf("esquerda\n");
                    return 1;
                } else if (j+1 != r) { //direita
                    printf("direita\n");
                    return 1;
                }*/
                if (i-1 != -1 && a[i-1][j] == 'W') { //cima
                    return 1;
                } else if (i+1 != r && a[i+1][j] == 'W') { //baixo
                    return 1;
                } else if (j-1 != -1 && a[i][j-1] == 'W') { //esquerda
                    return 1;
                } else if (j+1 != c && a[i][j+1] == 'W') { //direita
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main(){ _
	
    char a[510][510];
    int r, c;
    int i, j;

    scanf("%i %i", &r, &c);

    for (i = 0; i < r; i++) {
        scanf("%s", a[i]);
    }

    
    /*for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%c", a[i][j]);
        }
        printf("\n");
    }*/

    if (isImpossible(a, r, c)) {
        printf("No\n");
        return 0;
    }

    printf("Yes\n");

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] == '.') {
                printf("D");
            } else {
                printf("%c", a[i][j]);
            }
        }
        printf("\n");
    }


	return 0;
}