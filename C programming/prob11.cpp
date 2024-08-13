#include <bits/stdc++.h>
using namespace std;

void print(int arr[],int size,int i){
    if(i == size) return;
    cout << arr[i] << endl;
    print(arr,size,i+1);
}

int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    print(arr,n,0);
    return 0;
}