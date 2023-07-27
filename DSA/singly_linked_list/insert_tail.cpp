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
void insert_tail(Node * &head,Node * &tail,int val){
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

void print_linked_list(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void insert_positon(Node *head,int pos,int val){
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
void delete_position(Node *head,int pos){
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

void insert_head(Node * &head,int val){

    if(head == NULL){
        cout << "Invalid to insert head" << endl;
        return;
    }
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}



void delete_head(Node * &head){
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    insert_tail(head,tail,10);
    insert_tail(head,tail,20);
    insert_tail(head,tail,30);
    insert_tail(head,tail,40);
    insert_tail(head,tail,50);
    print_linked_list(head);

    return 0;
}