#include<iostream>
#include<conio.h>
using namespace std;
#define size 100000
void fun(unsigned long long int a[],unsigned long long int n,unsigned long long int p,unsigned long long int k)
{
    
     unsigned long long int i,j,x=0,min,b[n*n/2];
     unsigned long long int m[n][n];
     for(i=0;i<n;i++)
                     m[i][i]=a[i];
     for(i=0;i<n;i++)
                     for(j=0;j<n;j++)
                     {
                                     if(i<j)
                                     {
                                            m[i][j]=m[i][j-1]+a[j];
                                            m[j][i]=m[i][j]%p;
                                            if(m[j][i]>=k)
                                                          b[x++]=m[j][i];
                                     }
                     }
     min=b[0];
     for(i=0;i<x;i++)
                     if(b[i]<min)
                                 min=b[i];
     cout<<min<<endl;
}
int main()
{
 
    unsigned long long int a[size],n,p,k;
    int i,j,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
                     cin>>n>>k>>p;
                     for(i=0;i<n;i++)
                                     cin>>a[i];
                     fun(a,n,p,k);
    }
    getch();
    return 0;
}
     
     
     
         
