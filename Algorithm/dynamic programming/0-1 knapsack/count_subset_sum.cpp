#include<bits/stdc++.h>

using namespace std;

int dp[1005][1005];

int subset(int n,int arr[],int s){
    if(n == 0){
        if(s == 0){
            return 1;
        }
        return 0;
    }
    
    if(dp[n][s] != -1) return dp[n][s];

    if(arr[n-1] <= s){
        int op1 = subset(n-1,arr,s-arr[n-1]);
        int op2 = subset(n-1,arr,s);
        return dp[n][s] = op1 + op2;
    }
    else{
        return dp[n][s] = subset(n-1,arr,s);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    int s;
    cin >> s;

    for(int i = 0;i <= n;i++){
        for(int j = 0;j <= s;j++){
            dp[i][j] = -1;
        }
    }
    cout << subset(n,arr,s) << endl;
    return 0;
}