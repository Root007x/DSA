#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "programming";
    string alph = "abcdefghijklmnopqrstuvwxyz";
    int count[26] = {0};

    for(int i = 0;i < 26;i++){
        count[str[i] - 97]++;
    }
    for(int i = 0;i < 26;i++){
        cout << alph[i] << " : " << count[i] << endl;
    }

    return 0;
}