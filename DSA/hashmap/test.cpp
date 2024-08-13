#include<bits/stdc++.h>

using namespace std;

int main(){
    set<vector<int>> st;
    st.insert({1,2,3,4});
    st.insert({1,2,3,4});

    vector<vector<int>> v;

    for(auto it : st){
        v.push_back(it);
    }
    for(auto i : v[0]){
        cout << i << " ";
    }
    return 0;
}