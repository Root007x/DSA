#include<bits/stdc++.h>

using namespace std;
int parents[100];
int parentLevel[100];

void set_parent(int n){
    for(int i = 0;i <= n;i++){
        parents[i] = -1;
        parentLevel[i] = 0;
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
        if(parentLevel[leaderA] > parentLevel[leaderB]){
            // leader A
            parents[leaderB] = leaderA;
        }
        else if(parentLevel[leaderA] < parentLevel[leaderB]){
            // leader B
            parents[leaderA] = leaderB;
        }
        else{
            // both level are same we can chose any leader
            parents[leaderB] = leaderA;
            parentLevel[leaderA]++;
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

    cout << set_find(5) << endl;
    return 0;
}