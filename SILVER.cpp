#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a;
    do
    {
            cin>>a;
            if(a!=0)
            cout<<(int)log2(a)<<'\n';
    }while(a!=0);
    return 0;
}
