#include<bits/stdc++.h>

using namespace std;

class edge{
    public:
        int a;
        int b;
        int w;

        edge(int a,int b,int w){
            this->a = a;
            this->b = b;
            this->w = w;
        }
};

int main(){
    int n,e;
    cin >> n >> e;
    vector<edge> v;
    int dist[n+1];

    while(e--){
        int a,b,w;
        cin >> a >> b >> w;
        edge ed(a,b,w);
        v.push_back(ed);
    }
    // for(auto i : v){
    //     cout << i.a << " " << i.b << " " << i.w << endl;
    // }
    for(int i = 0;i <= n;i++){
        dist[i] = INT_MAX;
    }
    dist[1] = 0;
    for(int i = 1;i <= n-1;i++){
        for(int j = 0;j < v.size();j++){
            edge ex = v[j];
            int a = ex.a;
            int b = ex.b;
            int w = ex.w;

            if(dist[a] + w < dist[b]){
                dist[b] = dist[a] + w;
            }

        }
    }

    for(int i = 1;i <= n;i++){
        cout << "NODE "<< i << " :" << dist[i] << endl;
    }

    return 0;
}