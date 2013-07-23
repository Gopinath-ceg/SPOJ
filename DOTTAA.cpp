#include<iostream>
using namespace std;
int main()
{
    int t,n,m,d,*N,x;
    cin>>t;
    while(t--)
    {
              cin>>n>>m>>d;
              N=new int[n];
              for(int i=0;i<n;i++)
                      cin>>N[i];
              for(int i=0;i<n;i++)
              {
                    x=(N[i]-1)/d;
                    m-=x;
              }
              if(m>0)
              cout<<"NO"<<'\n';
              else
              cout<<"YES"<<'\n';
    }
    return 0;
}
