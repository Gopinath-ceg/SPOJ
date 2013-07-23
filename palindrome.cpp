#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long int a,b;
	int t,n,i,flag;
	cin>>t;
	while(t--)
	{
		cin>>a;
		b=a;
		n=0;
		flag=1;
		while(b)
		{
			if(b%10!=9)
				flag=0;
			n++;
			b/=10;
		}
		if(flag==1)
			cout<<a+2<<endl;
		else if(n%2 == 1)
		{
			n/=2;
			a=a+pow(10,n);
			cout<<a<<endl;
		}
		else
		{
			n/=2;
			a+=pow(10,n)+pow(10,n-1);
			cout<<a<<endl;
		}
	}
	return 0;
}
