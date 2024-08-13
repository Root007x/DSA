#include<bits/stdc++.h>

using namespace std;

void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int arr[7] = {1,2,3,4,6,4,2};
    int i = 0;
    int j = (sizeof(arr)/sizeof(arr[0])) - 1;

    while(i < j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for (int i: arr){
        cout << i << " ";
    }

    return 0;
}