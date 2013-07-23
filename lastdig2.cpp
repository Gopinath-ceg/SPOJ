#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,c,x;
    string a;
    long long unsigned int b;
    cin>>n;
    while(n--)
    {
              cin>>a>>b;
              x=a[a.size()-1]-'0';
              if(b==0)
                      cout<<1<<'\n';
              else
              {
                  c=x;
                  b=b%4;
                  if(b==0)
                          b=4;
                  while(b-- > 1)
                  {
                                c=c*x;
                                c=c%10;
            
                  }
                  cout<<c<<'\n';
              }
    }
    return 0;
}
