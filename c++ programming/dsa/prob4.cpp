#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin >> n >> q;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int target;

    while(q--){
        
        cin >> target;

        int l = 0;
        int r = n-1;
        bool flag = false;

        while(l <= r){
            int mid = (r+l)/2;
            if(arr[mid] == target){
                flag = true;
                break;
            }
            else if(arr[mid] < target) l = mid + 1;
            else r = mid - 1;
        }
        if(flag) cout << "found" << endl;
        else cout << "not found" << endl;

    }
    return 0;
}