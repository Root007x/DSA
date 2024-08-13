#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> nums = {1,2,5};
    int sum = 0;
    int n = nums.size();
    for(int i = 0;i < nums.size();i++){
        sum += nums[i];
    }

    if(sum % 2 == 0){
        int temp_sum = sum / 2;
        bool dp[n+1][sum+1];
        dp[0][0] = true;
        for(int i = 1;i <= temp_sum;i++) dp[0][i] = false;

        for(int i = 1;i <= n;i++){
            for(int j = 0;j <= temp_sum;j++){
                if(nums[i-1] <= j){
                    bool op1 = dp[i-1][j-nums[i-1]];
                    bool op2 = dp[i-1][j];
                    dp[i][j] = op1 || op2;
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }

            }
        }
        if(dp[n][temp_sum]) cout << "True" << endl;
        else{
            cout << "False" << endl;
        }
    }
    else{
        cout << "False" << endl;
    }

    return 0;
}