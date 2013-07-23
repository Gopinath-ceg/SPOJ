#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
   unsigned long long int n,t,s[500000],i,j;
   for(i=1;i<=500000;i++)
                         s[i]=0;
   for(i=1;i<=250000;i++)
    for(j=(2*i);j<=500000;j+=i)
                               s[j]+=i;
   cin>>t;
   while(t--)
   {
             cin>>n;
             cout<<s[n]<<endl;
   }
   getch();
   return 0;
}
