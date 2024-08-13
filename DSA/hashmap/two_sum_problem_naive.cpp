#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {8, 7, 2, 5, 3, 1};
    int target = 10;
    int idx1,idx2;
    bool flag = false;
    for(int i = 0;i < 5;i++){
        int tar = target - arr[i]; // 8
        idx1 = i;
        for(int j = i+1;j < 5;j++){
            if(tar == arr[j]){
                idx2 = j;
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    cout << idx1 << "," << idx2 << endl;
    return 0;
}