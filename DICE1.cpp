#include<iostream>
#include<cstdio>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int main()
{
	int t,n,m,max,a;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cin>>n>>m;
		if(m==0)
		{
			printf("Case #%d: %d/%d\n",i,1,1);
			continue;
		}
		max=0;
		for(int j=0;j<m;j++)
		{
			cin>>a;
			if(max<a)
				max=a;
		}
		m=n-max;
		if(m==0)
		{
			printf("Case #%d: %d/%d\n",i,0,1);
			continue;
		}
		a=gcd(n,m);
		n/=a;
		m/=a;
			printf("Case #%d: %d/%d\n",i,m,n);
	}
	return 0;
}
