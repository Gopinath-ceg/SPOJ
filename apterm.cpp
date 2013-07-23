#include<iostream>
//#include<conio.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int num[t][3];
    int n,d,i,j,a;
    for(i=0;i<t;i++)
    {
        for(j=0;j<3;j++)
           cin>>num[i][j];
    }
    for(i=0;i<t;i++)
    {
        n=(num[i][2]*2)/(num[i][0]+num[i][1]);
        d=(num[i][1]-num[i][0])/(n-5);
        cout<<n<<endl;
        a=num[i][0]-2*d;
        for(j=0;j<n;j++)
        {
            cout<<a<<" ";
            a=a+d;
        }
        cout<<endl;
    }
 //   getch();
    return 0;
}
