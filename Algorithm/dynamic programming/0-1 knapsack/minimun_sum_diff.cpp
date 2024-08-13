#include<bits/stdc++.h>

using namespace std;

int main(){
    int n = 4;
    int arr[n] = {1,5,4,11};
    int sum = 0;
    for(int i = 0;i < n;i++){
        sum += arr[i];
    }
    bool dp[n + 1][sum + 1];
    dp[0][0] = true;
    for(int i = 1;i <= sum;i++){
        dp[0][i] == false;
    }

    for(int i = 1;i <=n;i++){
        for(int j = 0;j <= sum;j++){
            if(arr[i-1] <= j){
                dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    vector<int> ans;
    int min_diff = INT_MAX;
    for(int i = 0;i <= n;i++){
        for(int j = 0;j <= sum;j++){
            if(dp[i][j] == 1){
                ans.push_back(j);
            }
        }
    }

    for(auto it : ans){
        int s1 = it;
        int s2 = sum - s1;
        min_diff = min(min_diff,abs(s1-s2));
    }
    cout << min_diff << endl;
    return 0;
}