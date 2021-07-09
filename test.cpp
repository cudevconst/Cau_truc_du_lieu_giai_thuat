#include <bits/stdc++.h>
using namespace std;
void out(string str)
{
  string res;
    stack<int> s;
    for(int i=0;i<=str.size();++i)
    {
      s.push(i+1);
      if(i==str.size() or str[i]=='I')
      {
        while(!s.empty())
        {
          res+=to_string(s.top());
          s.pop();
        }
      }
    }
    cout<<res<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    string str;
    cin>>str;
    out(str);
  }
}