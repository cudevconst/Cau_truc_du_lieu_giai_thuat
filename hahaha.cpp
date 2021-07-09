#include <bits/stdc++.h>
using namespace std;
void print(string a[],int n)
{
    for(int i=0; i<n ;++i)
    {
        cout<<a[i];
    }
    cout<<"\n";
}
int check(string a[],int n)
{
    if(a[0]=="A" or a[n-1]=="H")
    return 0;
    for(int i=0;i<n-1;++i)
    {
        if(a[i]=="H" and a[i+1]=="H")
            return 0;
    }
    return 1;
}
void sinh(string a[],int n,int i)
{
    if(i==n)
    {
        if(check(a,n))
        print(a,n);
        return;
    }
    a[i]="A";
    sinh(a,n,i+1);
    a[i]="H";
    sinh(a,n,i+1);
}
int main()
{
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string a[n];
		sinh(a,n,0);
	}
    return 0;
}