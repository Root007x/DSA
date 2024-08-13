#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();

    int dp[n+1][m+1];

    for(int i = 0;i <= n;i++){
        for(int j = 0;j <= m;j++){
            if(i == 0 || j  == 0){
                dp[i][j] = 0;
            }
        }
    }

    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else{
                dp[i][j] = 0;
            }
        }
    }
    int mx = 0;

    for(int i = 0;i <= n;i++){
        for(int j = 0;j <= m;j++){
            mx = max(mx,dp[i][j]);
        }
    }
    cout << mx << endl;

    return 0;
}