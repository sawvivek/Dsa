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
void nthlevels(Node* root,int c, int level){
    if(root==NULL) return;
    if(c==level){
    cout<<root->val<<" ";
    return;
    }
    nthlevels(root->left,c+1,level);
    nthlevels(root->right,c+1,level);
}
void nthlevelsrev(Node* root,int c, int level){
    if(root==NULL) return;
    if(c==level){
    cout<<root->val<<" ";
    return;
    }
    nthlevelsrev(root->right,c+1,level);
    nthlevelsrev(root->left,c+1,level);
}
int levels(Node* root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void levelOrder(Node* root){
    int n =levels(root);
    for(int i=1;i<=n;i++){
        nthlevelsrev(root,1,i);
        cout<<endl;
    }
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
    levelOrder(a);
}