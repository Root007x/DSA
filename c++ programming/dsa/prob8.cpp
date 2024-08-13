#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mid = (n/2);

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i==j){
                if(mid == i){
                    cout << "X";
                    continue;
                }
                cout << "\\" ;
                continue;
            }
            if(i + j == n-1){
                if(mid == i){
                    continue;
                }
                cout << "/";
                continue;
            }
            cout << " ";

        }
        cout << endl;
    }
    return 0;
}