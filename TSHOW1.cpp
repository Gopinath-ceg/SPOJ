#include<iostream>
#include<math.h>
using namespace std;
int a[5000],i,x;
void binary(long long unsigned int n)
{
	if(n>1)
	{
		a[i]=n%2;
		n=n/2;
		i++;
		binary(n);
	}
	if((x==1)&&(n<2))
	{
		a[i]=n;
		x=0;
	}
}
void bin()
{
	for(int j=0;j<=i;j++)
		a[j]+=5;
}
int main()
{
	int t,n;
	long long unsigned int num;
	cin>>t;
	while(t--)
	{
		i=0;
		x=1;
		cin>>num;
	//	cout<<num<<endl;
		if(num==1)
			cout<<"5"<<endl;
		else if(num==2)
			cout<<"6"<<endl;
		else
		{
		n=int(log2(num+1));
		num-=pow(2,n)-2;
//		cout<<n<<"  "<<num<<endl;
		binary(num-1);
		bin();
		while(i<n-1)
		{
			i++;
			a[i]=5;
		}
		for(;i>=0;i--)
			cout<<a[i];
		cout<<endl;
		}
	}
	return 0;
}
