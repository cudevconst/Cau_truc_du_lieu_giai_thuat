#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int inf;
    Node* left, * right;
};
Node* tao_node(int val)
{
    Node* curr = new Node;
    curr -> inf =  val
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>val[i][j];
        }
    }
    int T[1000][1000];
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            T[i][j]=val[i][j];
        }
    }
    for(int i=1;i<m;++i)
    {
        T[0][i]=T[0][i-1]+T[0][i];
    }
    for(int i=1;i<n;++i)
    {
        T[i][0]=T[i-1][0]+T[i][0];
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cout<<T[i][j]<<" ";
        }
        cout<<endl;
    }
        

}