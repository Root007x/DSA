#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int left,int right,int mid){
    int left_arr_size = (mid - left) + 1;
    int right_arr_size = right - (mid + 1) + 1;
    int left_arr[left_arr_size];
    int right_arr[right_arr_size];

    for(int i = left, j = 0 ; i <= mid;i++,j++){
        left_arr[j] = arr[i];
    }

    for(int j = mid + 1, i = 0; j <= right;j++,i++){
        right_arr[i] = arr[j];
    }

    left_arr[left_arr_size] = INT_MAX;
    right_arr[right_arr_size] = INT_MAX;

    int lp = 0 , rp = 0;
    for(int i = left;i <= right;i++){

        if(left_arr[lp] < right_arr[rp]){
            arr[i] = left_arr[lp];
            lp++;
        }
        else{
            arr[i] = right_arr[rp];
            rp++;
        }
    }
}


void merge_sort(int arr[],int left,int right){

    if(right == left) return;
    int mid = (left + right)/2;
    merge_sort(arr,left,mid); // left side
    merge_sort(arr,mid+1,right); // right side
    merge(arr,left,right,mid);
}



int main()
{
    int n = 7;
    int arr[n] = {18,14,10,20,40,60,40};    

    merge_sort(arr,0,n-1);

    for(auto i : arr){
        cout << i << " ";
    }
    return 0;
}