#include <iostream>  
#include <algorithm>
using namespace std;   
int main ()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int a[1000];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      sort(a,a+n);
      int l=0,r=1;
      for(int i=0;i<n;i++)
      {
        if(i%2==0)
        {
          cout<<a[n-r]<<" ";
          r++;
        }
        else
        {
          cout<<a[l++]<<" ";
        }
      }
      cout<<endl;
  }

  return 0;
}