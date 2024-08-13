#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int arr2[5];
    arr2[0] = arr[0];
    for(int i = 1;i < 5;i++){ // prefix sum
        arr2[i] = arr2[i-1] + arr[i];
    }
    for(int i : arr2){
        cout << i << " ";
    }
    return 0;
}