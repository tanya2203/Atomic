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
            cout << currentNode->data << " ";
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

    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(38);
    root->left->left = new node(20);
    root->right->right = new node(38);
    levelOrderTraversal(root);

    return 0;
}