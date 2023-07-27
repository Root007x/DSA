#include<bits/stdc++.h>
using namespace std;

void fun(int * &p){
    p = NULL; // p null means ptr null
}

int main()
{
    int val = 10;
    int *ptr = &val;
    fun(ptr); // Here ptr and p same
    cout << *ptr << endl;
    return 0;
}

