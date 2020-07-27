#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back

typedef long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

typedef pair<int, int> edge;
typedef vector<edge> vertice;
typedef vector<vertice> graph;

int T;
int N;
string I, O;
graph g;

void buildGraph() {
	for (int i = 0; i < N; i++) {
		vertice v;
		if (O[i] == 'Y') {
			if (i != 0) {
				if (I[i - 1] == 'Y') {
					edge e = make_pair(i, i - 1);
					v.push_back(e);
				}
			}
			if (i != N - 1) {
				if (I[i + 1] == 'Y') {
					edge e = make_pair(i, i + 1);
					v.push_back(e);
				}
			}
		}
		g.push_back(v);
	}
}

void printGraph() {
	for (vertice v : g) {
		for (edge e : v) {
			cout << "(" << e.f << ", " << e.s << ")" << endl;
		}
	}
}

void dfs(int eid, vector<char>& visited) {
	if (visited[eid] == 'Y') {
		return;
	} else {
		visited[eid] = 'Y';
		for (edge e : g[eid]) {
			dfs(e.s, visited);
		}
	}
}


int main(){ _

	cin >> T;
	for (int i = 1; i <= T; i++) {
		cout << "Case #" << i << ":" << endl;
		cin >> N;
		cin >> I;
		cin >> O;
		g.clear();

		buildGraph();
		
		for (int j = 0; j < N; j++) {
			vector<char> visited(N, 'N');
			dfs(j, visited);
			for (char v : visited) {
				cout << v;
			}
			cout << endl;
		}
	}


	exit(0);
}