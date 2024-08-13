#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {2,7,11,15};
    int target = 9;
    unordered_map<int,int> umap;

    for(int i = 0; i < 4;i++){ 
        int tar = target - arr[i];
        if(umap.find(tar) != umap.end()){
            cout << "Pain : " << i << "," << umap[tar] << endl;
            break;
        }
        umap.insert(make_pair(arr[i],i));
    }

    return 0;
}