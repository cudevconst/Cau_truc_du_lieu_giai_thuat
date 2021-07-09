#include<bits/stdc++.h>

using namespace std;
bool ok=0;
string s1,s2;
void check4(long n)
{
    int a=0,b=0;
    for(int i=0;;++i)
    {
        if(4*i>n)
           break;
        else if((n-(4*i))%7==0)
        {
            a=i;
            b=(n-(4*i))/7;
            ok=1;
           break;
        }
    }
    for(int i=0;i<a;++i)
    {
        s1+='4';
    }
    for(int i=0;i<b;++i)
    {
        s1+='7';
    }
}
void check7(long n)
{
    int a=0,b=0;
    for(int i=0;;++i)
    {
        if(7*i>n)
           break;
        else if((n-(7*i))%4==0)
        {
            a=i;
            b=(n-(7*i))/4;
            ok=1;
           break;
        }
    }
    for(int i=0;i<b;++i)
    {
        s2+='4';
    }
    for(int i=0;i<a;++i)
    {
        s2+='7';
    }
}
int main(){
    
   int t;
   cin>>t;
   while(t--)
   {
       s1.clear();
       s2.clear();
       ok=0;
       long n;
       cin>>n;
       check4(n);
       check7(n);
       
        if(ok)
        {
            if(s1.compare(s2)>0)
            {
                cout<<s1<<endl;
            }
            else cout<<s2<<endl;
        }
        else cout<<-1<<endl;
   }
    
    return 0;
}