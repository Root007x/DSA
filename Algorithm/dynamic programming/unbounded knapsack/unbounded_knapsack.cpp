#include<bits/stdc++.h>

using namespace std;
int dp[1005][1005];

int unbounded_knacksack(int n,int s,int v[],int w[]){

    if(n == 0 || s == 0) return 0;
    
    if(dp[n][s] != -1) return dp[n][s];

    if(w[n-1] <= s){
        int op1 = v[n-1] + unbounded_knacksack(n,s-w[n-1],v,w);
        int op2 = unbounded_knacksack(n-1,s,v,w);
        return dp[n][s] = max(op1,op2);
    }
    else{
        return dp[n][s] = unbounded_knacksack(n-1,s,v,w);
    }

}

int main(){
    int n,s;
    cin >> n >> s;
    int val[n],w[n];

    for(int i = 0;i <= n;i++){
        for(int j = 0;j<=s;j++){
            dp[i][j] = -1;
        }
    }

    for(int i = 0;i < n;i++){
        cin >> val[i];
    }
    for(int i = 0;i < n;i++){
        cin >> w[i];
    }
    cout << unbounded_knacksack(n,s,val,w) << endl;
    return 0;
}