#include<iostream>
using namespace std;
int main()
{
	int t,n,num,ans,f;
	cin>>t;
	while(t--)
	{
		int a[110]={0};
		ans=-1;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>num;
			a[num]++;
		}
		f=0;
		for(int i=0;i<=100;i++)
		{
			if(a[i]>f && a[i]%i==0 )
			{
				ans=i;
				f=a[i];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
