#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+5;
vector<pair<int,int>> adj_list[N];
int dis[N];
bool visited[N];

void dikjstra(int src){

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,src}); // {cost,src}
    dis[src] = 0;
    while(!pq.empty()){
        pair<int,int> parent = pq.top();
        int parent_node = parent.second;
        int parent_cost = parent.first;
        pq.pop();
        if(visited[parent_node]) continue;

        visited[parent_node] = true;

        for(int i = 0;i < adj_list[parent_node].size();i++){

            pair<int,int> child = adj_list[parent_node][i];
            int child_node = child.first;
            int child_cost = child.second;

            if((parent_cost + child_cost) < dis[child_node]){
                dis[child_node] = parent_cost + child_cost;
                pq.push({dis[child_node],child_node}); // cost,node
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
        //adj_list[b].push_back({a,w});
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