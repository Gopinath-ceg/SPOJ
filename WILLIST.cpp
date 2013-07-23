#include<iostream>
#include<math.h>
#include<ctype.h>
using namespace std;
int main()
{
    long long unsigned int n;
    cin>>n;
    if(log2(n)-(long long int)log2(n)==0)
    cout<<"TAK";
    else
    cout<<"NIE";
    return 0;
}
