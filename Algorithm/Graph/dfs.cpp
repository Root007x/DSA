#include<bits/stdc++.h>
using namespace std;


bool visited[100] = {false};

void dfs(vector<int> v[],int node){

    visited[node] = true;
    cout << "visited Node : " << node << endl;

    for(auto u : v[node]){

        if(visited[u] == true) continue;
        dfs(v,u);
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

    // for(int i = 1;i <= node;i++){
    //     cout << "List " << i << ": "; 
    //     for(auto j : adj_list[i]){
    //         cout << j << ", ";
    //     }
    //     cout << endl;
    // }

    dfs(adj_list,1);

    return 0;
}