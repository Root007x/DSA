#include <bits/stdc++.h>
using namespace std;

void fun(int arr[],int i){
    if(i == -1) return;
    if(arr[i] % 2 != 0){
        cout << arr[i] << " ";
    }
    fun(arr,i-1);
}

int main()
{
    int arr[5] = {1,3,4,5,8};
    fun(arr,5);
    return 0;
}