#include<iostream>
#include<math.h>
#include<ctype.h>
using namespace std;
int main()
{
    int n,*t,sum,m;
    float a;
    cin>>n;
    while(n!=-1)
    {
                sum=0;
              t=new int[n];
              for(int i=0;i<n;i++)
              {
              cin>>t[i];
              sum+=t[i];
              }
              a=(float)sum/n;
              if(a-(int)a!=0)
                             cout<<-1<<'\n';
              else
              {
                  m=0;
                  for(int i=0;i<n;i++)
                  if(a>t[i])
                  m+=(int)a-t[i];
                  else
                  m+=t[i]-(int)a;
                  cout<<m/2<<'\n';
              }
              cin>>n;
    }
    return 0;
}
