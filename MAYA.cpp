#include<cstdio>
#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
int main()
{
    char a[25];
        long long unsigned int n;
        int d,num;
        while(1)
        {
                cin>>d;
        scanf("\n");
                if(d==0)
                        break;
                n=0;
                while(d--)
                {
                        gets(a);
                        num=0;
                        if(a[0]=='S')
                                continue;
                        for(int i=0;a[i]!=0;i++)
                        {
                                if(a[i]=='.')
                                        num++;
                                else if(a[i]=='-')
                                        num+=5;
                        }
            if(d>1)
                num*=18;
            if(d)
                        n+=num*pow(20,d-1);
            else
            n+=num;
     //       cout<<n<<"   "<<num<<endl;
                }
                cout<<n<<endl;
        }
        return 0;
}
/*
1 0
2 20
3 18 20
4 18 20 20
5 18 20 20 20
*/
