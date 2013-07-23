#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
	int t;
	int n;
	cin>>t;
	int a[250][250];
	while(t--)
	{
		long int b[250][250]={0};
		scanf("%d",&n);
		for(int i=0;i<=n/2;i++)
			for(int j = 0 ; j<i+1;j++)
				scanf("%d",&a[i][j]);
		for(int i=0;i<n/2;i++)
			for(int j = 0 ; j<n/2-i;j++)
				scanf("%d",&a[n/2+i+1][j]);
		b[0][0]=a[0][0];
		for(int i=1;i<=n/2;i++)
		{
			for(int j = 0 ; j<i+1;j++)
			{
				if(j-1>=0 && (b[i-1][j-1] > b[i-1][j]))
					b[i][j]=a[i][j]+b[i-1][j-1];
				else if(j<i)
					b[i][j]=a[i][j]+b[i-1][j];
				else
					b[i][j]=a[i][j]+b[i-1][j-1];
			}
		}
		for(int i=0;i<n/2;i++)
			for(int j = 0 ; j<n/2-i;j++)
			{
				int t=n/2+1+i;
				if(b[t-1][j+1] > b[t-1][j])
					b[t][j]=a[t][j]+b[t-1][j+1];
				else
					b[t][j]=a[t][j]+b[t-1][j];
				}
		printf("%d\n",b[n-1][0]);
	}
}
