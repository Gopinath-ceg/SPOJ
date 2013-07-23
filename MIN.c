#include<stdio.h>
int main()
{
	int t;
	long long unsigned int a;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%llu",&a);
		printf("%llu\n",a*(a+1)/6);
	}
	return 0;
}
