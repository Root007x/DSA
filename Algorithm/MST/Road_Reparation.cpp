#include<bits/stdc++.h>

using namespace std;

class Edge{
    public:
        int a,b,w;

        Edge(int a,int b,int w){

            this->a = a;
            this->b = b;
            this->w = w;
        }
};

bool cmp(Edge a, Edge b){
    return a.w < b.w;
}   

const int N = 1e5+5;
int parents[N];
int parentSize[N];

void set_parent(int n){
    for(int i = 0;i <= n;i++){
        parents[i] = -1;
        parentSize[i] = 1;
    }
}

int set_find(int node){
    
    while(parents[node] != -1){
        node = parents[node];
    }
    return node;
}

void set_union(int a,int b){
    int leaderA = set_find(a);
    int leaderB = set_find(b);

    if(leaderA != leaderB){
        if(parentSize[leaderA] > parentSize[leaderB]){
            // leader A
            parents[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
        }
        else{
            // leader B
            parents[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
        }
    }
}  


int main(){
    int n,e;
    cin >> n >> e;
    set_parent(n);
    vector<Edge> v;
    vector<Edge> ans;

    while(e--){
        int a,b,w;
        cin >> a >> b >> w;
        v.push_back(Edge(a,b,w));
    }
    sort(v.begin(),v.end(),cmp);

    for(Edge val : v){
        int a = val.a;
        int b = val.b;
        int w = val.w;
        int leaderA = set_find(a);
        int leaderB = set_find(b);
        if(leaderA == leaderB) continue;
        ans.push_back(val);
        set_union(a,b);
    }
    long long sum = 0;

    for(Edge id : ans){
        sum += (long long)id.w;
    }
    if(ans.size() == n-1){
        cout << sum << endl;
    }
    else{
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}