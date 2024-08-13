#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> nums = {100};
    int sum = 0;
    int target = -200;
    int n = nums.size();
    for(int i = 0;i < n;i++){
        sum += nums[i];
    }

    int s = (target + sum)/2;
    int dp[n + 1][s + 1];
    dp[0][0] = 1;
    for(int i = 1;i <= s;i++) dp[0][i] = 0;

    for(int i = 1;i <= n;i++){
        for(int j = 0;j <= s;j++){
            if(nums[i-1] <= j){
                dp[i][j] = dp[i-1][j-nums[i-1]] + dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    
    cout << dp[n][s] << endl;

    return 0;
}