#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void InsertAtPos(node *&head, int pos, int data)
{
    int cnt = 0;

    node *temp = head;
    while (cnt < pos)
    {

        temp = temp->next;
        cnt++;
    }
    node *newnode = new node(data);
    newnode->next = temp->next;
    temp->next = newnode;
}

void InsertAtHead(node *&head, int data)
{
    // create new node
    node *newnode = new node(data);
    // connect with heads
    node *temp = head;
    newnode->next = head;
    head = newnode;
}
void InsertAtTail(node *&tail, int data)
{
    // create new node
    node *newnode = new node(data);

    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = newnode;
    tail = tail->next;
}
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
}

int main()
{

    // head->10
    node *n1 = new node(10);
    node *head = n1;
    node *tail = head;
    InsertAtHead(head, 20);

    InsertAtHead(head, 40);

    print(head);
    cout << "insert at tail" << endl;
    InsertAtTail(tail, 90);
    print(head);
    cout << "insert at pos" << endl;
    InsertAtPos(head, 2, 67);
    print(head);
   
    return 0;
}