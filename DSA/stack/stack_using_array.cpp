#include<bits/stdc++.h>
using namespace std;

class myStack{
    private:
        vector<int> v;

    public:
        void push(int val){
            v.push_back(val);
        }
        void pop(){
            v.pop_back();
        }
        int top(){
            return v.back();
        }

        int size(){
            return v.size();
        }

        bool empty(){
            if(v.size() == 0){
                return true;
            }
            return false;
        }

};

int main()
{
    myStack st;
    return 0;
}