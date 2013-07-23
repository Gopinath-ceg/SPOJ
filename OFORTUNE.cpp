#include<iostream>
using namespace std;
int main()
{
	int t,yr,c_s;
	unsigned long long int n,sum,sim,a,ans,sub;
	double interest;
	cin>>t;
	while(t--)
	{
		cin>>a>>yr>>n;
		ans=0;
		for(int i=0;i<n;i++)
		{
			sum=a;
			cin>>c_s>>interest>>sub;
			if(c_s==0)
			{
				sim=0;
				for(int j=0;j<yr;j++)
				{
					sim+=int(sum*interest);
					sum-=sub;
				}
				sum+=sim;
			}
			else
			{
				for(int j=0;j<yr;j++)
				{
					sum+=int(sum*interest)-sub;
				}
			}
			if(ans<sum)
				ans=sum;
		}
		cout<<ans<<endl;
	}
	return 0;
}
