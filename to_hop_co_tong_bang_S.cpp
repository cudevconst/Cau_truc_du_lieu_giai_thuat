#include <bits/stdc++.h>
 
using namespace std;
vector<int> v;
int a[21];
int n,s;
bool ok;
void print()
{
    cout<<"[";
    for(int i=0;i<v.size();++i)
    {
        cout<<v[i];
        if(i<v.size()-1)
        {
            cout<<" ";
        }
    }
    cout<<"]";
}
void out(int i,int sum)
{
    if(sum>s)
        return;
    if(sum==s)
    {
        print();
        ok=1;
        return;
    }
    for(int j=i;j<n;++j)
    {
        if(sum+a[j]<=s)
        {
            v.push_back(a[j]);
            out(j,sum+a[j]);
            v.pop_back();
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ok=0;
       cin>>n>>s;
       for(int i=0;i<n;++i)
       {
           cin>>a[i];
       }
       out(0,0);
       if(ok==0)
       cout<<-1;
       cout<<endl;
    }
 
    return 0;
}