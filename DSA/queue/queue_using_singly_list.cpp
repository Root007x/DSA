#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node*next;
    
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class myQueue{
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int sz;

        void push(int val){
            sz++;
            Node * newNode = new Node(val);
            if(head == NULL){
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            tail = newNode;
        }

        void pop(){
            sz--;
            Node *deleteNode = head;
            head = head->next;
            delete deleteNode;
            if(head == NULL){
                tail = NULL;
            }
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
    myQueue qs;
    qs.push(10);
    qs.push(20);
    qs.push(30);

    cout << qs.front() << endl;
    qs.pop();
    cout << qs.size() << endl;
    cout << qs.front() << endl;
    return 0;
}