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

Node * head = NULL;
Node * tail = NULL;

void insert_tail(int val){
    if(head == NULL){
        Node *newNode = new Node(val);
        head = newNode;
        tail = newNode;
        return;
    }
    else{
        Node *newNode = new Node(val);
        tail->next = newNode;
        tail = newNode;
    }

}

void print_linked_list(){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void insert_positon(int pos,int val){
    if(head == NULL){
        return;
    }
    Node *temp = head;
    for(int i = 0;i < pos-1;i++){
        temp = temp->next;

        if(temp == NULL){
            cout << endl << "Invalid Index" << endl;
            return;
        }
    }
    Node *newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;

}
void delete_position(int pos){
    Node *temp = head;
    for(int i = 0;i < pos-1;i++){
        temp = temp->next;

        if(temp == NULL){
            cout << endl << "Invalid Index" << endl;
            return;
        }
    }
    if(temp->next == NULL){
        cout << endl << "Invalid Index" << endl;
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void insert_head(int val){

    if(head == NULL){
        cout << "Invalid to insert head" << endl;
        return;
    }
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void delete_head(){
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}

int size(){
    if(head == NULL){
        return -1;
    }
    Node *temp = head;
    int count = 0;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

void print_reverse(Node *n){
    if(n == NULL){
        return;
    }
    print_reverse(n->next);
    cout << n->val << " ";
}

void sort(){ // sort linked list

    for(Node *i = head;i->next != NULL;i = i->next){
        for(Node *j = i->next;j != NULL;j = j->next){
            if(i->val > j->val){
                swap(i->val,j->val);
            }
        }
    }
}

int main()
{

    insert_tail(100);
    insert_tail(20);
    insert_tail(10);
    insert_tail(40);
    insert_tail(23);
    insert_tail(50);
    insert_tail(60);
    insert_tail(70);
    
    int max = INT_MIN;
    Node *tmp = head;
    for(int i = 0;i < size();i++){
        if(tmp->val > max) max = tmp->val;
        tmp = tmp->next;
    }
    cout << max << endl;

    return 0;
}