#include <iostream> 
#include <math.h> 
#include <algorithm>
using namespace std;  

int main ()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      int x; 
      cin>>n;
      int a[1000];
      cin>>x;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      for(int i=0;i<n-1;i++)
      {
        for(int j=0;j<n-i-1;j++)
        {
          if(abs(a[j]-x)>abs(a[j+1]-x))
          swap(a[j],a[j+1]);
        }
      }
      for(int i=0;i<n;i++)
      {
        cout<<a[i]<<" ";
      }
      cout<<endl;
  }

  return 0;
}