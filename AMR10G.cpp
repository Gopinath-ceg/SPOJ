#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,k,i;
	long int a[20000],min;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		for(i=0;i<n;i++)
			scanf("%ld",&a[i]);
		sort(a,a+n);
		min=a[k-1]-a[0];
		for(i=k;i<=n;i++)
			if(min>a[i-1]-a[i-k])
				min=a[i-1]-a[i-k];
		printf("%ld\n",min);
	}
	return 0;
}
