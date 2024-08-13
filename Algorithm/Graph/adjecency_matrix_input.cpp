#include<bits/stdc++.h>

using namespace std;

int main(){

	int adjmat[100][100];
	int node,edge;
	cin >> node >> edge;

	for(int i = 0;i < edge;i++){
		int u,v;
		cin >> u >> v;
		adjmat[u][v] = 1; // directed
		adjmat[v][u] = 1; // undirected
	}

	for(int i = 1;i <= node;i++){
		for(int j = 1;j <= node;j++){
			cout << adjmat[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}