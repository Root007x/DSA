#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a[5] = {1,3,5,6,7};
    int b[5] = {2,4,6,8,10};
    int arr[10];

    int j = 0;
    for(int i = 0;i < 5;i++){
        j = i + 1;
        arr[i] = a[i];
        arr[j] = b[i];
    }
    for(auto i : arr) cout << i << " ";

    return 0;
}