#include<bits/stdc++.h>
using namespace std;

class myQueue{
    public:
        list<int> ls;
        void push(int val){
            ls.push_back(val);
        }

        void pop(){
            ls.pop_front();
        }

        int front(){
            return ls.front();
        }

        int size(){
            return ls.size();
        }
        bool empty(){
            return ls.empty();
        }
};      

int main()
{
    myQueue ms;
    ms.push(10);
    ms.push(20);
    ms.push(30);
    ms.push(40);

    cout << ms.front() << endl;
    ms.pop();
    cout << ms.front() << endl;
    return 0;
}