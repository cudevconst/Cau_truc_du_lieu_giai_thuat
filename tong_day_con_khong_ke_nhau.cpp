#include <bits/stdc++.h>
 
using namespace std;
int FindMaxSum(int arr[], int n)
{
  int incl = arr[0];
  int excl = 0;
  int excl_new;
  int i;
  
  for (i = 1; i < n; i++)
  {
     excl_new = (incl > excl)? incl: excl;
     incl = excl + arr[i];
     excl = excl_new;
  }
   return ((incl > excl)? incl : excl);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
 
    
         cout<< FindMaxSum(a, n)<<endl;
    }
 
    return 0;
}t