#include<bits/stdc++.h>

using namespace std;
// As unordered_map does not allow to store elements with duplicate keys
int main(){
    unordered_map<string,int> map;
    map["Tawhid"] = 10;
    map["Sabrina"] = 20;
    map["Rifat"] = 30;
    map["Shishir"] = 40;

    map.insert(make_pair("Hasan",50));

    cout << map.count("Hasan") << endl; // return 1 if key value exist or return 0 if not

    if(map.find("Hasan") == map.end()){
        cout << "Key not found" << endl;
    }
    else{
        cout << "Key Found" << endl;
    }

    return 0;
}