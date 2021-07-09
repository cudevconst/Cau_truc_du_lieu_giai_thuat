#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int p_value, value;
char side;

struct Node 
{
    int inf;
    Node* left, * right;
};

Node* create_node(int value)
{
    Node* curr = new Node;
    curr->inf = value;
    curr->left = curr->right = NULL;
    return curr;
}

bool push(Node* where)
{
    if (where == NULL)
        return false;
    if (where->inf == p_value)
    {
        if (side == 'L')
            where->left = create_node(value);
        else
            where->right = create_node(value);
        return true;;
    }
    if (push(where->left))
        return true;
    return push(where->right);
}
int isIdentical(Node* root1, Node* root2)
{
    if (root1 == NULL && root2 == NULL)
        return 1;
    else if (root1 != NULL && root2 == NULL)
        return 0;
    else if (root1 == NULL && root2 != NULL)
        return 0;
    else { 
        if (root1->inf == root2->inf && isIdentical(root1->left, root2->left)
            && isIdentical(root1->right, root2->right))
            return 1;
        else
            return 0;
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
        Node* root1 = NULL;
        Node* root2= NULL;
        for (int i = 0; i < nodes; ++i)
        {
            cin >> p_value >> value >> side;
            if (i == 0)
                root1 = create_node(p_value);
            push(root1);
        }
        int node1;
        cin>> node1;
        for (int i = 0; i < node1; ++i)
        {
            cin >> p_value >> value >> side;
            if (i == 0)
                root2 = create_node(p_value);
            push(root2);
        }
        cout<<isIdentical(root1,root2)<<endl;
    }
    return 0;
}