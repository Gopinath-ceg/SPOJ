/*#include<iostream>
using namespace std;
int main()
{
    int n[10],sum=0,flag=0;
    for(int i=0;i<10;i++)
    {
            cin>>n[i];
            sum+=n[i];
            if(sum==100)
            {
                        cout<<100;
                        flag=1;
                        break;
            }
            else if(sum>100)
            {
                 if(sum-100<=100+n[i]-sum)
                 {
                                            cout<<sum;
                                            flag=1;
                                            break;
                 }
                 else
                 {
                     cout<<sum-n[i];
                     flag=1;
                     break;
                 }
            }
    }
    if(flag==0)
    cout<<sum;
    return 0;
}
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i=10,s=0,n;
    while(i--)
    {
              cin>>n;
              if((s+n)<100)
              s+=n;
              else
              break;         
    }
    if(i>0)
            {
                   
                   if(((s+n-100)==(100-s))||((s+n-100)<(100-s)))
                                        s+=n;
                   
            }
            cout<<n<<'\t'<<i<<endl;
            cout<<s;
            getch();
            return 0;
}
