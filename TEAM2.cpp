#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int a[4],i=0;
	while(scanf("%d",&a[0])!=EOF)
	{
		cin>>a[1]>>a[2]>>a[3];
		sort(a,a+4);
		printf("Case %d: %d\n",++i,a[2]+a[3]);
	}
	return 0;
}
