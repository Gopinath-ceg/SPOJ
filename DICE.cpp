#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t,n,i;
	float sum;
	cin>>t;
	while(t--)
	{
		cin>>n;
		sum=0;
		for(int i=1;i<=n;i++)
			sum+=float(1.0/i);
		printf("%.2f\n",sum*n);
	}
	return 0;
}
