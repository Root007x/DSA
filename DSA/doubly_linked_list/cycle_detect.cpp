#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
    
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void print_forward(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;  
    }
    cout << endl;
}

void cycle_detect(Node * head){
    Node *fast = head;
    Node *slow = head;
    bool flag = false;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            flag = true;
            break;
        }
    }
    if(flag) cout << "Cycle Detected" << endl;
    else cout << "No Cycle Detected" << endl;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = a;

    cycle_detect(head);
    
    return 0;
}