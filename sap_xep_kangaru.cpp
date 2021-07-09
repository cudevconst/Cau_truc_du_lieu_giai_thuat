#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int i=0,j=n/2,res=0;
        while(i<n/2 and j<n)
        {
            if(a[j]>=a[i]*2)
            {
                res++;
                i++;j++;
            }
            else j++;
        }
        cout<<n-res<<endl;
    }
 
    return 0;
}