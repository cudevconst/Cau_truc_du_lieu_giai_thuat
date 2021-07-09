
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
int findADepth(Node *node)
{
    int d = 0;
    while (node != NULL)
    {
        d++;
        node = node->left;
    }
    return d;
}
bool isPerfectRec(Node *root, int d, int level = 0)
{
    if (root == NULL)
        return true;
    if (root->left == NULL && root->right == NULL)
        return (d == level + 1);
    if (root->left == NULL || root->right == NULL)
        return false;
    return isPerfectRec(root->left, d, level + 1) &&
           isPerfectRec(root->right, d, level + 1);
}
bool isPerfect(Node *root)
{
    int d = findADepth(root);
    return isPerfectRec(root, d);
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
        if (isPerfect(root1))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}