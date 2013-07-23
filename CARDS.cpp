#include<iostream>
using namespace std;

unsigned long long int count(int n)
{
    if(n==1) return 2;
    else return n*(n+1)+(((n-1)*n)/2);
}
int main()
{
    unsigned long long int t, n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
            cin>>n;
            cout<<count(n)%1000007<<endl;
    }
    return 0;
}
