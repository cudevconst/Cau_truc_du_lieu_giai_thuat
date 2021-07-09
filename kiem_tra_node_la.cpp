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
bool checkUtil(struct Node *root,
            int level, int *leafLevel)
{
    if (root == NULL) return true;
    if (root->left == NULL &&
        root->right == NULL)
    {
        if (*leafLevel == 0)
        {
            *leafLevel = level; 
            return true;
        }
        return (level == *leafLevel);
    }
    return checkUtil(root->left, level + 1, leafLevel) &&
            checkUtil(root->right, level + 1, leafLevel);
}
bool check(struct Node *root)
{
    int level = 0, leafLevel = 0;
    return checkUtil(root, level, &leafLevel);
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
        cout<<check(root1)<<endl;
    }
    return 0;
}