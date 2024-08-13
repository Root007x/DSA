#include<bits/stdc++.h>

#define ll long long

using namespace std;
const ll N = 1e5+5;

ll save[N];


ll fib(ll n){
    if(n == 0 || n == 1) return n;

    if(save[n] != -1) return save[n];

    ll ans1 = fib(n-1);
    ll ans2 = fib(n-2);
    save[n] = ans1 + ans2;
    return save[n];
}



int main(){
    ll n;
    cin >> n;

    for(ll i = 0;i <= n;i++){
        save[i] = -1;
    }
    ll ans = fib(n);
    cout << ans << endl;
    return 0;
}

