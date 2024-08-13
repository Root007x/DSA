#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1,1,1,2,3};
    int count[n] = {0};

    for(int i = 0;i < n;i++){
        count[arr[i]]++;
    }
    for(int i=0;i < n;i++){
        cout << i << " : " << count[i] << endl;
    }
   return 0;
}