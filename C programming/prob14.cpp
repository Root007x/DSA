#include <bits/stdc++.h>
using namespace std;

void fun(int n){
     if(n == 0) return;
     int x = n % 10;
     fun(n/10);
     cout << x << " ";
}

int main()
{
    int n = 12345;
    fun(n);
    return 0;
}