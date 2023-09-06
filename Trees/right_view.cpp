/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = right = NULL;
    }
};
void levelOrderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        // level wise number of nodes
        int CurrentNumOfNodes = q.size();
        while (CurrentNumOfNodes--)
        {
            node *currentNode = q.front();
            if (CurrentNumOfNodes != 1)
            {
                cout << currentNode->data << " ";
            }
            q.pop();

            // check child nodes

            if (currentNode->left)
            {
                q.push(currentNode->left);
            }
            if (currentNode->right)
            {
                q.push(currentNode->right);
            }
        }
        cout << endl;
    }
}
int main()
{

    //  10
    //   20.    38
    // 15       35
    //    45.
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(38);
    root->left->left = new node(15);
    root->left->left->right = new node(45);
    root->right->right = new node(35);
    levelOrderTraversal(root);

    return 0;
}