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

    // cout << "Inorder traversal : rooot value ";

    // cout << "left value";
    // cout << root->left->data << endl;
    // cout << "right value";
    // cout << root->right->data << endl;
    return 0;
}
