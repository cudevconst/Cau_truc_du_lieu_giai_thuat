#include <bits/stdc++.h>
#define ll long long
using namespace std;
int check(int a[],int n)
{
    for(int i=0;i<n-1;++i)
    {
        if(a[i]==a[i+1]+1 or a[i]+1==a[i+1])
            return 0;
    }
    return 1;
}
void print(int a[],int n)
{
    for(int i=0;i<n;++i)
    {
        cout<<a[i];
    }
}
void out(int n)
{
    int a[n];
    for(int i=0;i<n;++i)
    {
        a[i]=i+1;
    }
    do
    {
       if(check(a,n))
        {
            print(a,n);
            cout<<endl;
        }
       
    } while (next_permutation(a,a+n));
    
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        out(n);
    }

    return 0;
}