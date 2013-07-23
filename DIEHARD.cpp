#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t,h,a,c,flag;
	cin>>t;
	while(t--)
	{
		cin>>h>>a;
		c=0;
		flag=0;
		while(h>0 && a>0)
		{
			if(flag!=1)
			{
				h+=3;
				a+=2;
				flag=1;
			}
			else if(a>10)
			{
				flag=0;
				h-=5;
				a-=10;
			}
			else
			{
				flag=0;
				h-=20;
				a+=5;
			}
			c++;
		}
		cout<<c-1<<endl;
	}
	return 0;
}
