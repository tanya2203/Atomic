#include <iostream>
#include <map>
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

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

bool DetectLoop(node *head)
{
    node *temp = head;
    bool IsVisited = false;
    map<node *, bool> mp; //  1->2->3->4
    while (temp != NULL)
    {
        // already hai loop                    //
        if (mp[temp])
        {
            return true;
        }

        mp[temp] = true;
        temp = temp->next;
    }
    return false;
}
// floyd
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next; // Move fast two steps ahead
        if (slow == fast)
        {
            return true; // There is a loop
        }
    }
    return false; // No loop found
}
int main()
{

    // head->10
    node *n1 = new node(10);
    node *head = n1;
    node *tail = head;

    node *n2 = new node(300);
    node *n3 = new node(400);
    node *n4 = new node(500);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n1;

    // print(head);
    // cout << "reverse" << endl;
    // head = ReverseLinkedList(head);

    // print(head);
    if (DetectLoop(head))
    {
        cout << "loop present";
    }
    else
    {
        cout << "no loop";
    }
    if (floydDetection(head))
    {
        cout << "cycle" << endl;
    }
    else
    {
        cout << "no cycle";
    }
    return 0;
}
// bool floydDetection(node *&head)
// {
//     node *slow = head;
//     node *fast = head;
//     while (fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next; // Move fast two steps ahead
//         if (slow == fast)
//         {
//             return true; // There is a loop
//         }
//     }
//     return false; // No loop found
// }
