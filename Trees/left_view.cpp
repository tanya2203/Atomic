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

void leftView(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        int CurrentNumOfNodes = q.size();
        bool isFirstNode = true;

        for (int i = 0; i < CurrentNumOfNodes; ++i)
        {
            node *currentNode = q.front();
            q.pop();

            if (isFirstNode)
            {
                cout << currentNode->data << " ";
                isFirstNode = false;
            }

            if (currentNode->left)
            {
                q.push(currentNode->left);
            }
            if (currentNode->right)
            {
                q.push(currentNode->right);
            }
        }
    }
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(38);
    root->left->left = new node(15);
    root->left->left->right = new node(45);
    root->right->right = new node(35);

    leftView(root);

    return 0;
}
