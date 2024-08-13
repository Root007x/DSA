#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abba";
    

    int i = 0;
    int j = str.length() - 1;
    bool flag = false;
    
    while (i < j){
        if(str[i] == str[j]){
            flag = true;
        }else{
            flag = false;
        }
        i++;
        j--;
    }
    if(flag){
        cout << "Yes Palindram" << endl;
    }
    else{
        cout << "NO Palindram" << endl;
    }

    return 0;
}

