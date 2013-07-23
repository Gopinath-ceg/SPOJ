#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
    int n;
    long int a,b;
    cin>>n;
    while(n--)
    {
              cin>>a;
              b=0;
              while(a)
              {
                      b+=a/5;
                      a/=5;
              }
              cout<<b<<'\n';
    }
  //  getch();
    return 0;
}
