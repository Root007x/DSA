#include<bits/stdc++.h>
using namespace std;


bool visited[100] = {false};

void bfs(vector<int> v[],int node){
    queue<int> q;
    q.push(node);
    visited[node] = true;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        cout << "Visited Node : " << u << endl;

        for(auto i : v[u]){

            if(visited[i] == true) continue;
            q.push(i);
            visited[i] = true;
        }
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

    bfs(adj_list,1);

    return 0;
}