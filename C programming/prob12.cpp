#include <bits/stdc++.h>
using namespace std;

void count(string str,int i){
    int static con = 0;
    if(str[i] == '\0') {
        cout << "len : " << con;
        return;
    }
    con++;
    count(str,i+1);
}

int main()
{
    string str = "Hello";
    count(str,0);
    return 0;
}