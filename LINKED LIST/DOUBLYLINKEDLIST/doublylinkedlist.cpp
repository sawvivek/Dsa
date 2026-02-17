#include <iostream>
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
class DoublyLL
{
public:
    Node *head;
    Node *tail;
    int size;
    DoublyLL()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    void insertAtInx(int idx, int val)
    {
        if (idx < 0 || idx > size)
            cout << "Invalid index";
        else if (idx == 0)
            insertAtHead(val);
        else if (idx == size)
            insertAtEnd(val);
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev = temp;
            t->next->prev = t;
            size++;
        }
    }
    int insertAtIndex(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "Invalid index";
            return -1;
        }
        else if (idx == 0)
            return head->val;
        else if (idx == size)
            return tail->val;
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx; i++)
            {
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead()
    {
        if (size == 0)
        {
            cout << "List is Empty";
            return;
        }
        head = head->next;
        if (head)
            head->prev = NULL;
        if (head == NULL)
            tail = NULL;
        size--;
        // Node* tmep =head;
        // while(temp->next!=tail){

        // }
    }
    void deleteAtTail()
    {
        if (size == 0)
        {
            cout << "List is Empty!";
            return;
        }
        else if (size == 1)
        {
            deleteAtHead();
            return;
        }
        Node *temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtInx(int idx)
    {
        if (size == 0)
        {
            cout << "List is Empty!";
            return;
        }
        else if (idx < 0 || idx >= size)
        {
            cout << "Invalid index";
            return;
        }
        else if (idx == 0)
            return deleteAtHead();
        else if (idx == size - 1)
            return deleteAtTail();
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev = temp;
            size--;
        }
    }
    int getAiIdx(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "Invalid index";
            return -1;
        }
        else if (idx == 0)
            return head->val;
        else if (idx == size - 1)
            return tail->val;
        else
        {
            if (idx <= size / 2)
            {
                Node *temp = head;
                for (int i = 1; i <= idx; i++)
                {
                    temp = temp->next;
                }
                return temp->val;
            }
            else
            {
                Node *temp = tail;
                for (int i = 1; i < size - idx; i++)
                {
                    temp = temp->prev;
                }
                return temp->val;
            }
        }
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
};
int main()
{
    DoublyLL dll;
    dll.insertAtEnd(10);
    dll.insertAtEnd(20);
    dll.insertAtEnd(30);
    dll.insertAtEnd(40);
    dll.display();
    dll.insertAtHead(50);
    dll.insertAtHead(20);
    dll.display(); 
    // dll.insertAtInx(4, 80);
    // dll.display();
    // dll.deleteAtHead();
    // dll.display();
    // dll.deleteAtTail();
    // dll.display();
    // dll.deleteAtInx(2);
    // dll.display();
    cout << dll.getAiIdx(2) << endl;
    cout << dll.getAiIdx(4) << endl;
}