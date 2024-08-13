#include<iostream>

using namespace std;

int main(){

    int digit = 12345;

    while(true){
        int single_digit = digit % 10;
        digit = digit / 10;
        cout << single_digit << endl;
        if(digit == 0) break;
    }
}

