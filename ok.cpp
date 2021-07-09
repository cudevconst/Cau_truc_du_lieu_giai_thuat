#include <bits/stdc++.h>
using namespace std;
vector<int>v;
int cnt=0;
void print()
{
    cout<<"(";
    for(int i=0;i<v.size();++i)
    {
        if(i==v.size()-1)
        {
            cout<<v[i]<<")";
        }
        else cout<<v[i]<<" ";
    }
    cout<<" ";
}
void Try(int i,int n)
{
    if(n==0)
    {
        print();

        return;
    }
    for(int j=i;j>0;--j)
    {
        v.push_back(j);
        Try(min(j,n-j),n-j);
        v.pop_back();
    }
}
void demcnt(int i,int n)
{
    if(n==0)
    {
        cnt++;
        return;
    }
    for(int j=i;j>0;--j)
    {
        v.push_back(j);
        demcnt(min(j,n-j),n-j);
        v.pop_back();
    }
}
int main()
{
   	int t;
	cin>>t;
	while(t--)
	{
		cnt=0;
       int n;
       cin>>n;
       demcnt(n,n);
       cout<<cnt<<endl;
       Try(n,n);
       cout<<endl;
       
        
	}
    return 0;
}