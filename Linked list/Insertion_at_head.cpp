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

void InsertAtHead(node *&head, int data)
{
    // create new node
    node *newnode = new node(data);
    // connect with heads
    node *temp = head;
    newnode->next = head;
    head = newnode;
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
    InsertAtHead(head, 20);

    InsertAtHead(head, 40);
    print(head);
    return 0;
}