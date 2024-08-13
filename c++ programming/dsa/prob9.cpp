#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    cin >> m;
    int arr2[m];
    for(int i = 0;i < m;i++){
        cin >> arr2[i];
    }
    cin >> x;
    
    for(int i = 0;i < n;i++){
        if(x == i){
            for(int j = 0;j < m;j++){
                cout << arr2[j] << " ";
            }
        }
        cout << arr[i] << " ";
    }

    return 0;
}