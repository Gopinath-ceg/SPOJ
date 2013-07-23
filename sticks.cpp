#include<iostream>
using namespace std;
int main()
{
    long long unsigned int n,b,i;
    while((cin>>n))
    {
                              if(n<=9)
                              	cout<<n*n<<endl;
                              else
                              {
                                  
                                  b=81*(n/9+(n/9)%n*(n/9)%n);
                                  cout<<b<<endl;
                              }
    }
    return 0;
}
                                  
