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
    int ci,cj;

    for(int i = 0;i <= n;i++){
        for(int j = 0;j <= m;j++){
            if(dp[i][j] > mx){
                mx = dp[i][j];
                ci = i;
                cj = j;
            }
        }
    }
    string ans = "";

    while(ci != 0 && cj != 0){
        if(s1[ci-1] == s2[cj-1]){
            ans = s1[ci-1] + ans;
            ci--;
            cj--;
        }
        else{
            break;
        }
    }

    cout << ans << endl;

    return 0;
}