#include<iostream>
#include<conio.h>
//#include<math.h>
using namespace std;
int power(int a,int b)
{
     int i;
     int ans=a%10;
     cout<<a<<b;
     for(i=1;i<b;i++)
     {
                      ans=(a*ans)%10;
                      cout<<ans<<endl;
     }
     return ans;
}
int main()
{
    int t,a,x;
    long unsigned int b;
    cin>>t;
    if(t<=30)
    {
             for(int i=1;i<=t;i++)
             {
                     cin>>a>>b;
                     if(!((a==0)&&(b==0)))
                     {
                                          if(a==0)
                                                  cout<<endl<<"0";
                                          else if(b==0)
                                                       cout<<endl<<"1";
                                          else
                                          if((a>=0)&&(a<=20)&&(b>=0)&&(b<=2147483000))
                                          {
                                                                                      x=b%4;
                                                                                      if(x==0)
                                                                                              x=4;
                                                                                     // cout<<a<<x;
                                                                                      cout<<power(a,x);
                                          }
                     }
                                       
             }
             
    }
    getch();
    return 0;
}
