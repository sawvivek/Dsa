#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* right;
    Node* left;

    Node(int data){
        this->val =data;
        this->left=NULL;
        this->right =NULL;
    }
};
void display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
void D(Node* root,int c, int level){
    if(root==NULL) return;
    if(c==level){
    cout<<root->val<<" ";
    }
    D(root->left,c+1,level);
    D(root->right,c+1,level);

}
int sum(Node* root){
    if(root == NULL) return 0;
    return root->val+sum(root->left)+sum(root->right);
}
//h.w
int product(Node* root){
    if(root == NULL) return 1;
    return root->val*product(root->left)*product(root->right);
}
int size(Node* root){
    if(root == NULL) return 0;
    return 1+size(root->left)+size(root->right);
}
int maxInTree(Node* root){
    if(root == NULL) return INT8_MIN;
    int lmax= maxInTree(root->left);
    int rmax =maxInTree(root->right);
    return max(root->val,max(lmax,rmax));
}
//Level
int level(Node* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
int main(){
    Node* a =new Node(1);
    Node* b =new Node(2);
    Node* c =new Node(3);
    Node* d =new Node(4);
    Node* e =new Node(5);
    Node* f =new Node(6);
    Node* g =new Node(7);
    // Node* h =new Node(8);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    D(a,1,3);
    // display(a);
    // cout<<endl;
    // cout<<sum(a)<<endl;
    // cout<<size(a)<<endl;
    // cout<<maxInTree(a)<<endl;
    // cout<<product(a)<<endl;
    // cout<<level(a)<<endl;
}