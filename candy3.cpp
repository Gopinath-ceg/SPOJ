#include<iostream>
#include<math.h>
#include<ctype.h>
using namespace std;
int main()
{
    unsigned long long int n,t,sum,m;
    double a;
    cin>>m;
    while(m--)
    {
              cin>>n;
              sum=0;
              for(int i=0;i<n;i++)
              {
               cin>>t;
               sum=(sum+t)%n;
              }
              a=(float)sum/n;
              if(a-(int)a==0)
                             cout<<"YES"<<'\n';
              else
                  cout<<"NO"<<'\n';
    }
    return 0;
}
