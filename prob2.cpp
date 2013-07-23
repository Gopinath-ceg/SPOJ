#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	unsigned long long int a,m,n,i,*x,j,k;
	int t;
	bool flag;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>m;
		x=new unsigned long long int[sqrt(m)];
		for(i=0;i<sqrt(m);i++)
			for(j=2;j<
		for(i=n;i<=m;i++)
		{
			flag = false;
			for(j=2;j<=sqrt(i);j++)
				if(i%j==0)
				{
					flag=true;
					break;
				}
			if(!flag && i!=1)
				printf("%llu\n",i);
		}
		cout<<endl;
	}
	return 0;
}
