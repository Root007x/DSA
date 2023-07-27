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

int size(Node *head){
    Node *tmp = head;
    int count = 0;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}

void print_forward(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;  
    }
    cout << endl;
}

void print_backward(Node *tail){
    Node *tmp = tail;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_positon(Node *head,int pos,int val){
    if(pos >= size(head)){
        cout << "Invalid Index" << endl;
        return;
    }
    Node *tmp = head;
    for(int i = 0;i < pos-1;i++){
        tmp = tmp->next;
    }
    Node * newNode = new Node(val);
    newNode->next = tmp->next;
    newNode->prev = tmp;
    tmp->next->prev = newNode;
    tmp->next = newNode;
}

void insert_at_head(Node * &head,Node * &tail,int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node * &head,Node * &tail,int val){
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

void delete_at_position(Node * head, int pos){
    Node *tmp = head;   
    for(int i = 0;i < pos-1;i++){
        tmp = tmp->next;
    }
    Node * delete_node = tmp->next;
    delete_node->next->prev = tmp;
    tmp->next = delete_node->next;

    delete delete_node;
}

void delete_tail(Node * &tail){
    Node *delete_node = tail;
    tail->prev->next = NULL;
    tail = tail->prev;
    delete delete_node;

}

void delete_head(Node * &head){
    Node *delete_node = head;
    head = head->next;
    head->prev = NULL;

    delete delete_node;
}

void reverse_val(Node *head,Node *tail){
    Node *i = head;
    Node *j = tail;
    while(i != j && i->next != j){ // two pointer
        swap(i->val,j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val,j->val);
}

int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev =a;
    b->next = c;
    c->prev = b;
    reverse_val(head,tail);
    print_forward(head);

    
    return 0;
}