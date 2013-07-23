#include<iostream>
using namespace std;
int main()
{
    unsigned long long int a=1,b=2,c=3,d;
    cout<<1<<'\n'<<2<<'\n'<<3<<'\n';
    for(int i=3;i<100;i++)
    {
            d=c+a;
            cout<<d<<'\n';
            a=b;
            b=c;
            c=d;
    }
    return 0;
}
