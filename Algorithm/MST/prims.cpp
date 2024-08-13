#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+5;
vector<pair<int,int>> adg_list[N];
bool visited[N];

class Edge{
    public:
        int a,b,w;

        Edge(int a,int b,int w){

            this->a = a;
            this->b = b;
            this->w = w;
        }
};

class cmp{
    public:
        bool operator()(Edge a, Edge b){
            return a.w > b.w;
        }   
};

void prims(int src){
    priority_queue<Edge,vector<Edge>,cmp> pq;
    vector<Edge> edge_list;
    pq.push(Edge(src,src,0)); 

    while(!pq.empty()){
        Edge par = pq.top();
        pq.pop();
        int a = par.a;
        int b = par.b;
        int w = par.w;

        if(visited[b]) continue;
        visited[b] = true;
        edge_list.push_back(par);

        for(int i = 0;i < adg_list[b].size();i++){
            pair<int,int> child = adg_list[b][i];

            if(!visited[child.first]){
                pq.push(Edge(b,child.first,child.second));
            }
        }
    }
    edge_list.erase(edge_list.begin());
    for(Edge it : edge_list){
        cout << it.a << " " << it.b << " " << it.w << endl;
    }
}


int main(){
    int n,e;
    cin >> n >> e;

    while(e--){
        int a,b,w;
        cin >> a >> b >> w;

        adg_list[a].push_back({b,w});
        adg_list[b].push_back({a,w});
    }
    prims(1);
    return 0;
}