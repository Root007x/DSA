#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+5;
int dis[N]; // level
bool visited[N];
vector<int> adj_list[N];


void bfs(int src){
    queue<int> q;
    q.push(src);
    visited[src] = true;
    dis[src] = 0;

    while(!q.empty()){
        int parent = q.front();
        q.pop();
        cout << parent << endl;

        for(int i = 0;i < adj_list[parent].size();i++){

            int child = adj_list[parent][i];
            if(visited[child]) continue;

            q.push(child);
            visited[child] = true;
            dis[child] = dis[parent]+1;
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

    // for(int i = 0;i <= n;i++){
    //     cout << i << "-> ";
    //     for(int j = 0;j < adj_list[i].size();j++){
    //         cout << adj_list[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    bfs(1);

    for(int i = 0;i <= n;i++){
        cout << "Node "<< i << ": "<< dis[i] << endl;
    }

    return 0;
}