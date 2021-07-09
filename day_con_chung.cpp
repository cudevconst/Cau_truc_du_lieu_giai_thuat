#include <bits/stdc++.h>
using namespace std;
int ok=0;
void findCommon(int ar1[], int ar2[], int ar3[], int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
         if (ar1[i] == ar2[j] && ar2[j] == ar3[k])
         {   cout << ar1[i] << " ";   i++; j++; k++; 
         ok=1;}
         else if (ar1[i] < ar2[j])
             i++;
         else if (ar2[j] < ar3[k])
             j++;
         else
             k++;
    }
}
int main()
{
   	int t;
	cin>>t;
	while(t--)
	{
		
        int n,m,p;
        ok=0;
        cin>>n>>m>>p;
        int a[n],b[m],c[p];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;++i)
        {
            cin>>b[i];
        }
         for(int i=0;i<p;++i)
        {
            cin>>c[i];
        }
        
        findCommon(a,b,c,n,m,p);
        if(!ok) cout<<"NO";
        cout<<endl;
        
	}
    return 0;
}