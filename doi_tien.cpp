#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
	int k,cnt=0;
    cin>>k;
    int a[10]={1,2,5,10,20,50,100,200,500,1000};
    for(int i=9;i>=0;--i)
    {
        while(k>=a[i])
        {
            k-=a[i];
            cnt++;
        }
    }
    cout<<cnt<<endl;
    }
	return 0;
}