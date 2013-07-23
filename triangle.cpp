#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    long unsigned int n;
    long long unsigned int s;
    cin>>a;
    while(a--)
    {
            cin>>n;
            s=n*n+(n-1)*n*(n+1)/6;
            cout<<s<<'\n';
    }
    getch();
    return 0;
}
