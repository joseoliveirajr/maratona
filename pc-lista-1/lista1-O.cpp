#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int graph[210][210];
int color[210];

void init(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      graph[i][j] = 0;
    }
    color[i] = -1;
  }
}

void link(int a, int b) {
  graph[a][b] = 1;
  graph[b][a] = 1;
}

int checkBicolorable(int n) {
  int currentColor;
  int currentV;
  int nextColor;
  queue<int> qv;
  qv.push(0);
  color[0] = 0;
  while (!qv.empty()) {
    currentV = qv.front();
    currentColor = color[currentV];
    qv.pop();
    for (int i = 0; i < n; i++) {
      if (graph[currentV][i] == 1 && color[i] == currentColor) {
        return 0;
      } else if (graph[currentV][i] == 1 && color[i] == -1) {
        nextColor = currentColor == 1 ? 0 : 1;
        qv.push(i);
        color[i] = nextColor;
      }
    }
  }
  return 1;
}

int main(){ _
  int n, l;
  int a, b;
  while (scanf("%i", &n) == 1) {
    if (n != 0) {
      init(n);
    scanf("%i", &l);
    for (int i = 0; i < l; i++) {
      scanf("%i %i", &a, &b);
      link(a, b);
    }
    if (checkBicolorable(n)) {
      printf("BICOLORABLE.\n");
    } else {
      printf("NOT BICOLORABLE.\n");
    }
    }
  }
	return 0;
}