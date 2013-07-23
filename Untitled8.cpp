#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i=10,s=0,n;
    while(i--)
    {
              cin>>n;
              if((s+n)<=100)
              s+=n;
              else
              break;             
     }                  
                  if(i>0)
                   if(s+n-100<=100-s)
                                        s+=n;
            cout<<s;
                        getch();
            return 0;
}
