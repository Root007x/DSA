#include <bits/stdc++.h>
using namespace std;

int fun(int n){
    if(n == 0) return 1;

    return n * fun(n-1);
}

int main()
{
    int x = fun(5);
    cout << x << endl;
    return 0;
}