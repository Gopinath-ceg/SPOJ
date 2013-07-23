#include<iostream>
using namespace std;
int main()
{
	long long int n,i;
	long long int *a,*b;
	int flag;
	cin>>n;
	while(n)
	{
		flag=0;
		a=new long long int[n];
		b=new long long int[n];
		for(i=1;i<=n;i++)
			cin>>a[i];
		for(i=1;i<=n;i++)
			b[a[i]]=i;
		for(i=1;i<=n;i++)
			if(a[i]!=b[i])
			{
				flag=1;
				break;
			}
		if(flag)
			cout<<"not ambiguous"<<endl;
		else
			cout<<"ambiguous"<<endl;
		cin>>n;
	}
	return 0;
}
