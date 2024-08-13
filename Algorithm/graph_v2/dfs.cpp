#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+5;
vector<int> adj_list[N];
bool visited[N];

void dfs(int src){
    visited[src] = true;
    cout << src << endl;
    
    for(int i = 0;i < adj_list[src].size();i++){
        int child = adj_list[src][i];
        if(visited[child]) continue;
        dfs(child);
    }
}

int main(){
    int n,e;
    cin >> n >> e;

    while(e--){
        int a,b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    dfs(1);

    return 0;
}