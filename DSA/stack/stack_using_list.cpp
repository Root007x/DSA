#include<bits/stdc++.h>
using namespace std;

class myStack{
    private:
        list<int> ls;
    public:
        void push(int val){
            ls.push_back(val);
        }

        void pop(){
            ls.pop_back();
        }

        int top(){
            return ls.back();
        }

        int size(){
            return ls.size();
        }

        bool empty(){
            if(ls.empty() == 0) return true;
            return false;
        }
};

int main()
{
    
    return 0;
}