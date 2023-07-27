#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *next;
        Node *prev;
    
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myQueue{
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int sz = 0;

        void push(int val){
            sz++;
            Node *newNode = new Node(val);
            if(head == NULL){
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        void pop(){
            sz--;
            Node *deleteNode = head;
            if(head == NULL){
                tail == NULL;
                delete deleteNode;
                return;
            }
            head = head->next;
            head->prev = NULL;
            delete deleteNode;
        }

        int front(){
            return head->val;
        }

        int size(){
            return sz;
        }
        bool empty(){
            if(sz == 0) return true;
            return false;
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