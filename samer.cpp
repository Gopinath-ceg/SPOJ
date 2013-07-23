#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    long long unsigned int s;
    cin>>n;
    while(n)
    {
            s=n*(n+1)*(2*n+1); 
            s=s/6;
            cout<<s<<'\n';
            cin>>n;
    }
    getch();
    return 0;
}
