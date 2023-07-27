#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    int mid;
    if(len % 2 == 0){
        mid = len / 2;
        cout << arr[mid - 1] << " " << arr[mid] << endl;
    }
    else{
        mid = len / 2;
        cout << arr[mid] << endl;
    }

    return 0;
}