#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int val = 3;
    // option 1
    if(find(arr,arr+5,val) != end(arr)){
        cout << "Elements : " << val << ", Index : " << distance(arr,find(arr,arr+5,val)) << endl;
    }
    // option 2
    auto itr = find(arr,arr+n,2);
    if(itr != end(arr)){
        cout << "Elements : " << 2 << ", Index : " << distance(arr,itr) << endl;
    }

    // vector
    vector<int> v = {1,2,3,4,5};

    auto itrr = find(v.begin(),v.end(),4);
    if(itrr != end(v)){
       cout << "Elements : " << 4 << ", Index : " << distance(v.begin(),itrr) << endl;
    }

    return 0;
}