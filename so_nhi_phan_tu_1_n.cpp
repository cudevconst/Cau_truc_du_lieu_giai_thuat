#include<bits/stdc++.h>
using namespace std;
void shownp(stack<int> s,int n)
{
  while(n>0)
  {
    s.push(n%2);
    n/=2;
  }
  while(!s.empty())
  {
    cout<<s.top();
    s.pop();
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
    stack<int> s;
    for(int i=1;i<=n;++i)
    {
      shownp(s,i);
      cout<<" ";
    }
    cout<<endl;

  }
  
  return 0;
}