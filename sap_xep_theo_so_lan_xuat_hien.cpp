#include<bits/stdc++.h>
using namespace std;
bool tmp(pair<int,int> &a,pair<int,int> &b)
{
  if(a.second!=b.second)
  return a.second>b.second;
  return a.first<b.first;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    map<int,int> m;
    for(int i=0;i<n;++i)
    {
      cin>>a[i];
      m[a[i]]++;
    }
    vector<pair<int,int>> p;
    for(auto& c:m)
    {
      p.push_back(c);
    }
    sort(p.begin(),p.end(),tmp);
    for(auto&it:p)
    {
      for(int i=0;i<it.second;++i)
	  {
		  cout<<it.first<<" ";
	  }
    }
    cout<<endl;

  }
  
  return 0;
}