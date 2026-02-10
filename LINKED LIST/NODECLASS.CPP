#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }

};
void Display(Node a){
    Node temp =a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp =*(temp.next);
    }
}
// void printr(Node a){
//     Node temp =a;
//     while(1){
//         cout<<temp.val<<" ";
//         if(temp.next==NULL) break;
//         printr(*(temp.next));
//     }
// }
// void printr(Node a){
//     Node temp =a;
//     if(temp.next==NULL) return;
//     cout<<temp.val<<" ";
//     printr(*(temp).next);
// }
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    a.next=&b;
    b.next=&c;
    c.next=&d;

    Display(a);
    cout<<endl;

    // cout<<a.val<<endl;
    // cout<<a.next->val<<endl;
    // cout<<b.val<<endl;;
    // cout<<a.next->next->val<<endl;
    // cout<<(((a.next)->next)->next)->val;

    // Node temp =a;
    // while(1){
    //     cout<<temp.val<<" ";
    //     if(temp.next==NULL) break;
    //     temp =*(temp.next);
    // }

}