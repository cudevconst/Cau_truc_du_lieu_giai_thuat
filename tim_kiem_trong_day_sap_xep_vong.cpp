#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        if(abs(a[0]-k)<abs(a[n-1]-k))
        {
            for(int i=0;i<n;++i)
            {
                if(a[i]==k)
                {
                    cout<<i+1<<endl;
                    break;
                }

            }
        }
        else {
            for(int i=n-1;i>=0;--i)
            {
                if(a[i]==k)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        
    }
    return 0;
}