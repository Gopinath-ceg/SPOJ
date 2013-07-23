#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
    int a;
    long int s1,s2,s;
    cin>>a;
    while(a--)
    {
              if((s1<0)&&(s2<0))
              {
               s1*=-1;
               s2*=-1;
               }
            cin>>s1>>s2;
            if(s1+s2==0)
                        cout<<2<<'\n';
            else if((s1*2==s2)||(s2*2==s1))
                             cout<<1<<'\n';
            else if(s1>s2)
                          cout<<s1-s2<<'\n';
            else
                          cout<<s2-s1<<'\n';
    }
 //   getch();
    return 0;
}
