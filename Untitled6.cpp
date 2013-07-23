#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
long int GCD(long int a,long int b)
{
    if(b==0)
            return a;
    return(GCD(b,a%b));
}
int main()
{
    int x;
    long int t,a,b;
    cin>>t;
    long int *c=new long int[t];
    string s;
    for(int j=0;j<t;j++)
    {
     cin>>s;
     for(int i=0;i<s.size();i++)
            if(s[i]=='.')
            {
                         a=atoi(&s[i+1]);
                         b=a;
                         x=10000;
                         while(b)
                         {
                          x/=10;
                          b/=10;
                         }    
                         c[j]=a*x;
                         break;
            }      
     }
    for(int i=0;i<t;i++)
            cout<<10000/(GCD(10000,c[i]))<<'\n';
    return 0;
}
