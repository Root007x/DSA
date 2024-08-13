#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[6] = {1,0,-1,0,-2,2};
    int target = 0;
    set<vector<int>> st;
    vector<vector<int>> v;
    sort(arr,arr+6);
    for(int i = 0; i < 6;i++){
        for(int j = i + 1;j < 6;j++){
            for(int k = j + 1;k < 6;k++){
                int tar = target - (arr[i] + arr[j] + arr[k]);
                auto itr = find(arr,arr+6,tar);
                if(itr != end(arr)){
                    int indx = distance(arr,itr);
                    st.insert({i,j,k,indx});
                }
            }
        }
    }
    for(auto it : st){
        v.push_back(it);
    }
    for(int i = 0;i < v.size();i++){
        for(auto j : v[i]){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}