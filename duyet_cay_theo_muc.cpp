#include <bits/stdc++.h>

using namespace std;

int p_value, value;
char side;

struct Node
{
    int inf;
    Node *left, *right;
};

Node *create_node(int value)
{
    Node *curr = new Node;
    curr->inf = value;
    curr->left = curr->right = NULL;
    return curr;
}

bool push(Node *where)
{
    if (where == NULL)
        return false;
    if (where->inf == p_value)
    {
        if (side == 'L')
            where->left = create_node(value);
        else
            where->right = create_node(value);
        return true;
        ;
    }
    if (push(where->left))
        return true;
    return push(where->right);
}
void printLevelOrder(Node *root)
{
    if (root == NULL)  return;
    queue<Node *> q;
    q.push(root);
 
    while (q.empty() == false)
    {
        Node *node = q.front();
        cout << node->inf << " ";
        q.pop();
        if (node->left != NULL)
            q.push(node->left);
        if (node->right != NULL)
            q.push(node->right);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int nodes;
        cin >> nodes;
        Node *root1 = NULL;

        for (int i = 0; i < nodes; ++i)
        {
            cin >> p_value >> value >> side;
            if (i == 0)
                root1 = create_node(p_value);
            push(root1);
        }
        printLevelOrder(root1);
        cout<<endl;
    }
    return 0;
}