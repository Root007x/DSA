#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+5;
vector<int> adj_list[N];
bool visited[N];

// dfs using stack
void dfs(int src){
    stack<int> s;
    visited[src] = true;
    s.push(src);
    
    while(!s.empty()){
        int sp = s.top();
        s.pop();

        cout << sp << endl;

        for(int i = 0;i < adj_list[sp].size();i++){
            int child = adj_list[sp][i];
            
            if(visited[child]) continue;
            s.push(child);
            visited[child] = true;
        }
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