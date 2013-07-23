#include<iostream>
using namespace std;
int main()
{
    int n,c,a,i;
    long unsigned int b;
    cin>>n;
    while(n--)
    {
              cin>>a>>b;
              if(b==0)
                      cout<<1<<'\n';
              else if(a==0)
                   cout<<0<<'\n';
              else
              {
                  c=a%10;
                  b=b%4;
                  if(b==0)
                          b=4;
                  for(i=2;i<=b;i++)
                  {
                                c=c*a;
                                c=c%10;
                  }
                  c=c%10;
                  cout<<c<<'\n';
              }
    }
    return 0;
}
