#include<iostream>
#include<conio.h>
using namespace std;
long int GCD(long int a,long int b)
{
    if(b==0)
            return a;
    return(GCD(b,a%b));
}
int main()
{
    long int t;
    cin>>t;
    long double a,*n=new long double[t];
    for(int i=0;i<t;i++)
            cin>>n[i];
    for(int i=0;i<t;i++)
    {
            a=n[i]*10000;
            cout<<10000/(GCD(10000,a))<<'\n';
    }
    getch();
    return 0;
}
