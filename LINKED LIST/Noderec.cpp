#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void Displayrec(Node *a)
{
    Node *temp = a;
    if (temp == NULL)
        return;
    Displayrec(temp->next);
    cout << temp->val << " ";
}

int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    Node *t = new Node(60);
    Displayrec(a);
}