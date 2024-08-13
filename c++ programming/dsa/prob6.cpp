#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t,n;
    cin >> t;
    bool flag = false;

    while(t--){
        cin >> n;
        long long arr[n];
        for(int i = 0;i < n;i++){
            cin >> arr[i];
        }
        for(int i = 0;i < n-1;i++){
            if(arr[i] <= arr[i+1]){
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        flag = false;
    }

    return 0;
}