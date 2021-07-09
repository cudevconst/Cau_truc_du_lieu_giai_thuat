#include <iostream> 
#include <math.h> 
#include <algorithm>
#include <map>
using namespace std;  

int main ()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      sort(a,a+n);
      int ok=0;
      for(int i=0;i<n-1;i++)
      {
        if(a[i]!=a[i+1])
        {
          cout<<a[i]<<" "<<a[i+1]<<'\n';
          ok=1;
          break;
        }
      }
      if(ok==0)cout<<"-1\n";
      
  }

  return 0;
}