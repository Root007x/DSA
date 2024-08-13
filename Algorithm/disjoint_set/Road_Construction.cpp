#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+5;
int parents[N];
int parentSize[N];
int mx = 0;

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
            mx = max(mx,parentSize[leaderA]);
        }
        else{
            // leader B
            parents[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
            mx = max(mx,parentSize[leaderB]);
        }
    }
}  

int main(){
    int n,e;
    cin >> n >> e;
    set_parent(n);
    int cmp = n;
    while(e--){
        int a,b;
        cin >> a >> b;
        int leaderA = set_find(a);
        int leaderB = set_find(b);

        if(leaderA != leaderB){
            cmp--;
            set_union(a,b);
        }
        cout << cmp << " " << mx << endl;
    }

    return 0;
}