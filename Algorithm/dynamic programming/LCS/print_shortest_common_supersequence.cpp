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
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    int i = n;
    int j = m;
    string ans = "";

    while(i!= 0 && j!= 0){

        if(s1[i-1] == s2[j-1]){
            ans = s1[i-1] + ans;
            i--;
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1]){
            ans = s1[i-1] + ans;
            i--;
        }
        else{
            ans = s2[j-1] + ans;
            j--;
        }
    }

    while(i!= 0){
        ans = s1[i-1] + ans;
        i--;
    }
    while(j != 0){
        ans = s2[j-1] + ans;
        j--;
    }
    
    cout << ans << endl;

    return 0;
}