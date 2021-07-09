#include <bits/stdc++.h>
using namespace std;
int a[11][11],n,ok;
char c[100];
void ql(int i,int j,int k)
{
    if(i==n-1 and j==n-1)
    {
        for(int i=0;i<k;++i)
        {
            cout<<c[i];
        }
        cout<<" ";
       
        ok++;
        return;
    }
    if(i<n and a[i+1][j]==1)
    {
        c[k]='D';
        a[i+1][j]=0;
        ql(i+1,j,k+1);
        a[i+1][j]=1;
    }
    if(j<n and a[i][j+1]==1)
    {
        c[k]='R';
        a[i][j+1]=0;
        ql(i,j+1,k+1);
        a[i][j+1]=1;
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    cin>>n;
    ok=0;
    
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            cin>>a[i][j];
        }
    }
    if(a[0][0] and a[n-1][n-1])
    ql(0,0,0);
    if(ok)
    {
        cout<<"\n";
    }
    else cout<<"-1\n";
    }
    
    return 0;
}