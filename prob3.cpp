#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
	long long unsigned int m,n,i,j,k,*b,h;
	int t;
	bool a[32000],flag;
	a[0]=false;
	a[1]=false;
	for(i=2;i<=32000;i++)
		a[i]=true;
	for(i=2;i<=32000;i++)
		if(a[i]==true)
			for(j=i*i;j<=sqrt(m);j=j+i)
				a[j]=false;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>m;
		b=new long long unsigned int[(long long int)sqrt(m ];
		j=0;
		for(i=0;i<=sqrt(m);i++)
			if(a[i]==true)
				b[j++]=i;
		for(i=0;i<j;i++)
			if(b[i]>=n)
				printf("%llu\n",b[i]);
		h=(unsigned long long int)sqrt(m)+1;
		if(h<n)
			h=n;
		for(i=h;i<=m;i++)
		{
			flag=true;
			if(i<=sqrt(m) && a[i] == false )
				break;
			for(k=0;k<=sqrt(i);k++)
				if(k<j)
					if(i % b[k] == 0 && b[k]!=i)
					{
						flag = false;
						break;
					}
			if(flag==true && i!=1)
				printf("%llu\n",i);
		}
		cout<<endl; 
	}
	return 0;
}
