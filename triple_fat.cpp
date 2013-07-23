#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    long long unsigned int a,b;
    int n;
    cin>>n;
    while(n--)
    {
              cin>>a;
              b=192;
              b+=250*(a-1);
              cout<<b<<'\n';
    }
    getch();
    return 0;
}
