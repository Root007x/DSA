#include <bits/stdc++.h>
using namespace std;

void fun(string str,int i){
    static int count = 0;
    
    if(str[i] == '\0') {
        cout << count << endl;
        return;
    }
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
        count++;
    }
    fun(str,i+1);
}

int main()
{
    string str = "data structure lab";
    fun(str,0);
    return 0;
}