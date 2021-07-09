#include <bits/stdc++.h> 
using namespace std; 
void print(int a[],int n)
{
	for(int i=0;i<n;++i)
	{
		cout<<a[i];
		if(i<n-1)cout<<" ";
	}
}
void check(int a[],int n)
{
	for(int i=0;i<n-1;++i)
	{
		a[i]=a[i]+a[i+1];
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
		int a[n];
		for(int i=0;i<n;++i)
		{
			cin>>a[i];
		}
		cout<<"[";
		print(a,n);
		cout<<"]";
		cout<<endl;
		while(n>1)
		{
			check(a,n);
			cout<<"[";
			print(a,n-1);
			n--;
			cout<<"]"<<endl;
		}

	}
    return 0; 
}