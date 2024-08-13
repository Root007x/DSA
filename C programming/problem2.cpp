#include<iostream>
using namespace std;

int main(){
    int x[5] = {1,5,23,5,6};

    int max = INT_MIN;
    cout << "Max Value : " << max << endl;
    for(int i = 0;i < 5;i++){
        if(x[i] > max) max = x[i];
    }
    cout << "Max Value : " << max << endl;
    return 0;
}