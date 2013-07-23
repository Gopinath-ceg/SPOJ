#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
    int a,b;
    float c;
    cin>>a>>b;
    while(a!=-1 && b!=-1)
    {
                if(b>a)
                {
                      c=a;
                      a=b;
                      b=c;
                } 
              if(a==0)
                      cout<<b<<'\n';
              else if(a==b)
                   cout<<1<<'\n';
              else 
              {
               c=(float)a/(b+1);
               a=(int)c;
               if(c-int(c)!=0)
               a=int(c)+1;
               cout<<a<<'\n';
              }
              cin>>a>>b;
    }
 //   getch();
    return 0;
}

