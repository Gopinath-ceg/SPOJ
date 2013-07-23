#include<iostream>
using namespace std;
int main()
{
    int a,x,y,z;
    char b[4];
    cin>>b;
    while(strcmp(b,"00e0")!=0)
    {
                    x=b[0]-'0';
                    y=b[1]-'0';
                    z=b[3]-'0';
                    a=x*10+y;
                    for(int i=0;i<z;i++)
                    a*=10;
                    
                    cin>>b;
    }
    return 0;
}
