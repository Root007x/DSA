#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,e;
    cin >> n >> e;
    vector<int> adj_list[n+1];

    while(e--){
        int a,b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    for(int i = 0;i <= n;i++){
        cout << "Index "<< i << " : ";
        for(int j = 0;j < adj_list[i].size();j++){
            cout << adj_list[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}