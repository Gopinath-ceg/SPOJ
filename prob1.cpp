#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long int t,n,*a,j;
	int flag;
	unsigned long long int l,sum;
	cin>>t;
	for(long int i=1;i<=t;i++)
	{
		cin>>l;
		cin>>n;
		a=new long int[n]; 
		for(j=0;j<n;j++)
			cin>>a[j];
		sort(a,a+n);
		sum=0;
		j=n-1;
		while(sum<l && j>=0)
			sum+=a[j--];
		if(sum>=l)
		{
			cout<<"Scenario #"<<i<<":"<<endl;
			cout<<n-j-1<<endl<<endl;
		}
		else
		{
			cout<<"Scenario #"<<i<<":"<<endl;
			cout<<"impossible"<<endl<<endl;
		}
	}
	return 0;
}
