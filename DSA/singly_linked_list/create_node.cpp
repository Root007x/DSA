#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int value;
        Node*next;
};

int main()
{
    Node a;
    Node b;

    a.value = 10;
    b.value = 20;

    a.next = &b;
    cout << a.next->value << endl;
    return 0;
}