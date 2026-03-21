// T.C =O(1);
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class Deque
{
public:
    Node *head;
    Node *tail;
    int s;
    Deque()
    {
        head = tail = NULL;
        s = 0;
    }
    void pushBack(int val)
    {
        Node *temp = new Node(val);
        if (s == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        s++;
    }
    void pushFront(int val)
    {
        Node *temp = new Node(val);
        if (s == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        s++;
    }

    void popFront()
    {
        if (s == 0)
        {
            cout << "List is Empty";
            return;
        }
        head = head->next;
        if (head)
            head->prev = NULL;
        if (head == NULL)
            tail = NULL;
        s--;
        // Node* tmep =head;
        // while(temp->next!=tail){

        // }
    }
    void popBack()
    {
        if (s == 0)
        {
            cout << "List is Empty!";
            return;
        }
        else if (s == 1)
        {
            popFront();
            return;
        }
        Node *temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        s--;
    }
    int front()
    {
        if (s == 0)
        {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        return head->val;
    }
    int back()
    {
        if (s == 0)
        {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        return tail->val;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    int size()
    {
        return s;
    }
    bool isEmpty()
    {
        if (s == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.display();
    dq.popFront();
    dq.pushBack(50);
    dq.pushBack(60);
    dq.pushBack(70);
    dq.display();
    dq.popBack();
    dq.display();

    return 0;
}
