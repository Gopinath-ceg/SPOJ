#include<iostream>
using namespace std;
int main()
{
    int n;
    long long unsigned int a,b,c,d;
    cin>>n;
    while(n--)
    {
              cin>>a>>b;
              c=0,d=0;
              while(a)
              {
                      
                      c=c*10+a%10;
                      a/=10;
              }
              while(b)
              {
                      d=d*10+b%10;
                      b/=10;
              }
              a=c+d;
              c=0;
              while(a)
              {
                      c=c*10+a%10;
                      a/=10;
              }
              cout<<c<<'\n';
    }
    return 0;
}
