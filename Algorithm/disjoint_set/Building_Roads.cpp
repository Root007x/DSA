#include<bits/stdc++.h>

using namespace std;

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
    while(e--){
        int a,b;
        cin >> a >> b;
        set_union(a,b);
    }
    map<int,bool> mp;

    for(int i = 1;i <= n;i++){
        int leader = set_find(i);
        mp[leader] = true;
    }
    vector<int> v;
    for(pair<int,bool> pr : mp){
        v.push_back(pr.first);
    }
    cout << v.size()-1 << endl;
    for(int i = 0; i < v.size()-1;i++){
        cout << v[i] << " " << v[i+1] << endl;
    }
    return 0;
}