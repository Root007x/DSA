#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<string> names = {"alice", "brad", "collin", "brad", "dylan", "kim"};
    unordered_map<string,int> umap;

    for(string name:names){
        if(!umap.count(name)){
            umap[name] = 1;
        }else{
            umap[name]++;
        }
    }
    for(auto x : umap){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}