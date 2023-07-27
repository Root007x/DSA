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

int count_node(Node *root){
    if(root == NULL) return 0;

    int l = count_node(root->left);
    int r = count_node(root->right);
    return l+r+1;
}

int count_leaf(Node *root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    else{
        int l = count_leaf(root->left);
        int r = count_leaf(root->right);
        return l + r;
    }
}



int main()
{
    Node *root = input_tree();
    cout << count_leaf(root) << endl;

    return 0;
}