#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,l,r;
    cin >> n >> q;
    int arr[n];
    int pre_sum[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    pre_sum[0] = arr[0];
    for(int i = 1;i < n;i++){
        pre_sum[i] = pre_sum[i - 1] + arr[i];
    }

    for(int i = 0;i< q;i++){
        cin >> l >> r;
        l--;
        r--;
        if(l == 0) cout << pre_sum[r] << endl;
        else cout << pre_sum[r] - pre_sum[l-1] << endl;

    }

    return 0;
}