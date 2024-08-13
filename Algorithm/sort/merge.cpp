#include<bits/stdc++.h>

using namespace std;
int main()
{
    int arr1[5] = {1,3,5,7,9};
    int arr2[5] = {2,4,6,8,10};
    
    int arr[10];

    int i = 0,j = 0,k = 0;
    while(i != 5 || j != 5){

        if(i == 5){
            arr[k] = arr2[j];
            j++;
            k++;
            continue;
        }
        if(j == 5){
            arr[k] = arr1[i];
            i++;
            k++;
            continue;
        }

        if(arr1[i] <= arr2[j]){
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else{
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }
    for(auto i : arr) cout << i << " ";


    return 0;
}