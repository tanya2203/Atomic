#include <iostream>
#include <stack>
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
void InOrderTraversal(Node *&root)
{
    if (root == NULL)
    {

        return;
    }
    // cout << root->data << " ";
    InOrderTraversal(root->left);
    cout << root->data << " ";
    InOrderTraversal(root->right);
}

void preOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " "; // Print a space after the data
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
void postOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // Print a space after the data
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

// iterative traversal
void PreOrderIterative(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<Node *> s;
    s.push(root);

    while (!s.empty())
    {
        root = s.top();
        cout << root->data;
        s.pop();
        if (root->right)
        {
            s.push(root->right);
        }
        if (root->left)
        {
            s.push(root->left);
        }
    }
}
// iterative inorder
void InOrderIterative(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack<Node *> s;

    while (!s.empty() || root != NULL)
    {
        while (root != NULL)
        {
            s.push(root);
            root = root->left;
        }

        root = s.top();
        s.pop();

        cout << root->data << " "; // Print the data of the current node

        root = root->right;
    }
}
int main()
{
    //     50
    //    20       30
    // 10    5   2      3

    Node *root = new Node(50);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(10);
    root->left->right = new Node(5);
    root->right->left = new Node(2);
    root->right->right = new Node(3);
    cout << "preOrderTraversal" << endl;
    preOrderTraversal(root);
    cout << endl;
    cout << "IneOrderTraversal" << endl;
    InOrderTraversal(root);
    cout << endl;
    cout << "postOrderTraversal" << endl;
    postOrderTraversal(root);
    cout << endl;
    PreOrderIterative(root);
    cout << "iterative inorder" << endl;
    InOrderIterative(root);

    // cout << "Inorder traversal : rooot value ";

    // cout << "left value";
    // cout << root->left->data << endl;
    // cout << "right value";
    // cout << root->right->data << endl;
    return 0;
}
