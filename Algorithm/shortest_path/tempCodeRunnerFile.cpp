#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+5;
vector<pair<int,int>> adj_list[N];
int dis[N];

void dikjstra(int src){

    queue<int> q;
    q.push(src);
    dis[src] = 0;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(int i = 0;i < adj_list[parent].size();i++){

            pair<int,int> child = adj_list[parent][i];
            int child_node = child.first;
            int child_cost = child.second;

            if((dis[parent] + child_cost) < dis[child_node]){
                dis[child_node] = dis[parent] + child_cost;
                q.push(child_node);
            }

        }
    }
}

int main(){
    int n,e;
    cin >> n >> e;

    while(e--){
        int a,b,w;
        cin >> a >> b >> w;
        adj_list[a].push_back({b,w});
        adj_list[b].push_back({a,w});
    }

    for(int i = 0;i <= n;i++){
        dis[i] = INT_MAX;
    }
    dikjstra(1);
    for(int i = 1;i <= n;i++){
        cout << "Node Cost " << i << " : " << dis[i] << endl; 
    }
    return 0;
}