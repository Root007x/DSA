#include<bits/stdc++.h>
using namespace std;


bool visited[100] = {false};

bool cycle_detect(vector<int> v[],int node){

    visited[node] = true;
    cout << "visited Node : " << node << endl;

    for(auto u : v[node]){

        if(visited[u] == true) continue;
        cycle_detect(v,u);
    }
}


int main()
{
    int node,edge;
    cin >> node >> edge;
    vector<int> adj_list[100];

    for(int i = 0; i < edge;i++){
        int u,v;
        cin >> u >> v;
        adj_list[u].push_back(v); // directed
        adj_list[v].push_back(u); // urirected
    }

   
    if(cycle_detect(adj_list,1)) cout << "Cycle Detected!" << endl;
    else cout << "No cycle" << endl;
    return 0;
}