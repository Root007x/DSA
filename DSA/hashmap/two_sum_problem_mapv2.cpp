#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {2,7,11,15};
    int target = 9;
    unordered_map<int,int> umap;

    for(int i = 0; i < 4;i++){
        umap[arr[i]] = i;
    }

    for(int i = 0; i < 4;i++){ 
        int tar = target - arr[i];
        if(umap.count(tar) && umap[tar] != i){
            cout << i << "," << umap[tar] << endl;
            break;
        }
    }

    return 0;
}