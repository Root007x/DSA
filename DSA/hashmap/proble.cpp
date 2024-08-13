#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,1,2,3};
    unordered_map<int,int> umap;
    
    for(auto key : arr){
        umap[key]++;
    }

    for(auto i : umap){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}