#include <bits/stdc++.h>
 
using namespace std;
vector<int> v;
void print()
{
    cout<<"(";
    for(int i=0;i<v.size();++i)
    {
        cout<<v[i];
        if(i<v.size()-1)
        {
            cout<<" ";
        }
    }
    cout<<")";
}
void out(int i,int n)
{
    if(n==0)
    {
        print();
        cout<<" ";
        return;
    }
    for(int j=i;j>0;--j)
    {
        v.push_back(j);
        out(min(j,n-j),n-j);
        v.pop_back();
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       out(n,n);
       cout<<endl;
    }
 
    return 0;
}