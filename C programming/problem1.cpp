#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int x;
    printf("Enter value : ");
    while(scanf("%d",&x) != EOF){
        if(x == 1999){
            printf("Correct");
            break;
        }else{
            printf("Wrong\n");
        }
    }
    return 0;
}

