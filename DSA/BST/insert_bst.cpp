#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node * left;
        Node * right;
    
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node * input_tree(){
    Node * root;
    int val;
    cin >> val;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node *> q;
    q.push(root);

    while(!q.empty()){
        Node * p = q.front();
        q.pop();

        int l,r;
        Node* myleft,*myright;
        cin >> l>>r;
        if(l == -1) myleft = NULL;
        else myleft = new Node(l);

        if(r == -1) myright = NULL;
        else myright = new Node(r);

        p->left = myleft;
        p->right = myright;

        if(p->left != NULL) q.push(p->left);
        if(p->right != NULL) q.push(p->right);
    }

    return root;

}

void level_order(Node *root){
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node * f = q.front();
        q.pop();

        cout << f->val << " ";

        if(f->left != NULL) q.push(f->left);
        if(f->right != NULL) q.push(f->right);
    }
}

void insert_bst(Node *&root,int x){
    if(root == NULL){
        root = new Node(x);
        return;
    }

    if(root->val > x){

        if(root->left == NULL) root->left = new Node(x);
        else insert_bst(root->left,x);

    }
    else{
        if(root->right == NULL) root->right = new Node(x);
        else insert_bst(root->right,x);
    }

}

int main()
{
    Node* root = input_tree();
    insert_bst(root,13);
    insert_bst(root,32);
    level_order(root);

    return 0;
}