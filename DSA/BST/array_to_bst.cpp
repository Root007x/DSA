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

Node* array_to_bst(int arr[],int n,int l,int r){
    
    if(l > r) return NULL;

    int mid = (l + r)/2;
    Node *root = new Node(arr[mid]);
    Node *rootLeft = array_to_bst(arr,n,l,mid - 1);
    Node *rootRight = array_to_bst(arr,n,mid + 1,r);

    root->left = rootLeft;
    root->right = rootRight;
    return root;
}

int main()
{
    int n = 6;
    int arr[n] = {18,5,8,12,15,2};// must be sorted;
    sort(arr,arr+n);
    Node *root = array_to_bst(arr,n,0,n-1);
    level_order(root);
    
    return 0;
}