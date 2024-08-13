#include<bits/stdc++.h>

using namespace std;
int parents[8] = {-1,-1,1,1,6,4,-1,-1};

int find(int n){ // find leader
    while(parents[n] != -1){
        n =  parents[n];
    }
    return n;
}

int main(){
    cout << find(4) << endl;
    return 0;
}
