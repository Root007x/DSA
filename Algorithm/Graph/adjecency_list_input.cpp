#include<bits/stdc++.h>
using namespace std;
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

    for(int i = 1;i <= node;i++){
        cout << "List " << i << ": "; 
        for(auto j : adj_list[i]){
            cout << j << ", ";
        }
        cout << endl;
    }



    return 0;
}