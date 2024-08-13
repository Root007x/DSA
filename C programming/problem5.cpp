#include<bits/stdc++.h>

using namespace std;

int main(){
    int n = 5;
    int m = 4;
    int arr1[n] = {10,20,30,40,50};
    int arr2[m] = {60,70,80,90};
    int ans[m+n];

    int j = 0;
    for(int i = 0;i < m+n;i++){
        if(i >= n){
            ans[i] = arr2[j];
            j++;
            continue;
        }
        ans[i] = arr1[i];
    }

    for(int i : ans){
        cout << i << " ";
    }

    return 0;
}