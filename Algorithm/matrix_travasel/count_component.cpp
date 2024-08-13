#include<bits/stdc++.h>

using namespace std;
const int N = 1e5+5;
vector<int> adj_list[N];
bool visited[N];
vector<int> cmp_node;

void dfs(int src){
    visited[src] = true;
    cmp_node.push_back(src);
    for(int i = 0;i < adj_list[src].size();i++){
        int child = adj_list[src][i];
        if(visited[child]) continue;
        dfs(child);
    }
}

int main(){
    int n,e;
    cin >> n >> e;
    int count = 0;
    while(e--){
        int a,b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    for(int i = 1;i <= n;i++){
        if(!visited[i]){
            dfs(i);
            count++;

            for(int val : cmp_node){
                cout << val << " ";
            }
            cout << endl;
            cmp_node.clear();
        }
    }
    cout << "Component : " << count << endl;
    return 0;
}