#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};
int main()
{

    Node *root = new Node(50);
    root->left = new Node(20);
    root->right = new Node(30);
    cout << "root value";
    cout << root->data << endl;
    cout << "left value";
    cout << root->left->data << endl;
    cout << "right value";
    cout << root->right->data << endl;
    return 0;
}