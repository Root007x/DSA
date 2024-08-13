#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    char a[100] = "ab";
    char b[100] = "ab";
    int cmp = strcmp(a,b);
    if(cmp < 0){
        cout << "A smaller" << endl;
    }
    else if(cmp > 0){
        cout << "B smaller" << endl;
    }
    else{
        cout << "Same" << endl;
    }
    return 0;
}