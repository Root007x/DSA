#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node,edge;
    cin >> node >> edge;
    vector<pair<int,int>> adj_list[100];

    for(int i = 0; i < edge;i++){
        int u,v,w;
        cin >> u >> v >> w;
        adj_list[u].push_back({v,w}); // directed
        //adj_list[v].push_back(u); // urirected
    }

    for(int i = 1;i <= node;i++){
        cout << "List " << i << ": "; 
        for(auto j : adj_list[i]){
            cout << "(" <<j.first << "," << j.second << "),";
        }
        cout << endl;
    }

    return 0;
}