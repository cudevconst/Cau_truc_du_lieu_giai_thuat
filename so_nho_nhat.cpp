#include<iostream>
using namespace std;
void smallest(int n,int k)
{
    if(n==0)
    {
        k==1?cout<<0<<endl:cout<<-1<<endl;
        return;
    }
    if(n>9*k)
    {
        cout<<-1<<endl;
        return;
    }
    int res[k];
    n-=1;
    for(int i=k-1;i>=0;--i)
    {
        if(n>9)
        {
            res[i]=9;
            n-=9;
        }
        else{
            res[i]=n;
            n=0;
        }
    }
    res[0]+=1;
    for(int i=0;i<k;++i)
    {
        cout<<res[i];
    }
    cout<<endl;
}
int main(){
	int t;cin>>t;
    while(t--){
        int n,k;
    cin>>n>>k;
    smallest(n,k);
    }
	return 0;
}