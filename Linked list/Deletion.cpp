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
        cout << temp->data << "->";
        temp = temp->next;
    }
}

void DeletionaAtHead(node *&head)
{
    node *temp = head;
    head = head->next;
    delete temp;
}
// void DeletionaAtTail(node *head)
// {
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = NULL;

//     delete temp;
// }
void DeletionaAtPos(node *&head, int pos)
{
    int cnt = 0;
    node *prev = nullptr;
    node *curr = head;
    while (cnt < pos && curr != nullptr)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
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
    cout << "delete at head" << endl;

    DeletionaAtHead(head);
    print(head);
    cout << "delete at Tail" << endl;
    // DeletionaAtTail(head);
    // print(head);
    cout << endl;
    cout << "DeletionaAtPos" << endl;
    DeletionaAtPos(head, 2); // LAST
    print(head);

    return 0;
}