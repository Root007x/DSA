#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+5;
vector<int> adj_list[N];
bool visited[N];
int par[N];
int dis[N];

void find_parents(int src){
    queue<int> q;
    q.push(src);
    visited[src] = true;
    par[src] = -1;
    dis[src] = 0;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        //cout << parent << endl;

        for(int i = 0;i < adj_list[parent].size();i++){
            int child = adj_list[parent][i];

            if(visited[child]) continue;

            visited[child] = true;
            par[child] = parent;
            dis[child] = dis[parent] + 1;
            q.push(child);
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
    find_parents(1);

    // for(int i = 1;i <= n;i++){
    //     cout << par[i] << endl;
    // }
    int des;
    cin >> des;
    vector<int> v;

    if(visited[des]){
        int x = des;
        while(x != -1){
            v.push_back(x);
            x = par[x];
        }
        reverse(v.begin(),v.end());
        for(int i : v){
            cout << i << endl;
        }
    }
    else{
        cout << "No Path" << endl;
    }
    return 0;
}