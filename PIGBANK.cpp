#include<iostream>
using namespace std;
int main()
{
    int t,n,*V,*W,e,f,i,w,**b;
    cin>>t;
    while(t--)
    {
              cin>>e>>f;
              f-=e;
              cin>>n;
              V=new int[n];
              W=new int[n];
              for(i=1;i<=n;i++)
              cin>>V[i]>>W[i];
              for(w=0;w<=5;w++)
              {
                               b[0][w]=0;
                               b[w][0]=0;
              }
    }          
    return 0;
}
