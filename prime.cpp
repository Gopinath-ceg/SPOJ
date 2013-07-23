#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int prime[4000],num,i,j,size,x,start;
	bool p,a[100001];
	num=0;
	prime[num++]=2;
	for(i=3;i<=32000;i+=2)
	{
		p = true;
		size=(int)sqrt(i)+1;
		for(j=0;j<num;j++)
		{
			if(size<=prime[j])
				break;
			if(i % prime[j] == 0 )
			{
				p = false;
				break;
			}
		} 
		if(p == true)
		prime[num++] = i;
	}
	int t;
	long long unsigned int n,m;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		if(n==1)
		{
			cout<<endl;
			continue;
		}
		if(m<2)
			m=2;
		size = sqrt(n) + 1;
		for(i=0;i<100001;i++)
			a[i] = true;
		for(j=0;j<num;j++)
		{
			x=prime[j];
			if(x>=size)
				break;
			if(x>=m)
				start=x*x;
			else
				start=m+(x-m%x)%x;
			for(i=start;i<=n;i+=x)
				a[i-m]=false;
		}
		start=m;
		if(m%2==0)
			start=m+1;
		if(m==2)
			cout<<2<<endl;
		for(i=start;i<=n;i+=2)
			if(a[i-m])
				cout<<i<<endl;
		cout<<endl;
	}
	return 0;
}
