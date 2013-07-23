#include<stdio.h>
int main()
{
	int t;
	long long int a3,an,n,sum,d,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld %lld",&a3,&an,&sum);
		n=(sum*6)/(a3*4+an*3);
		printf("%lld\n",n);
		d=(an-a3)/(n-6);
		for(i=1;i<=n;i++)
			printf("%lld ",a3-3*d+i*d);
		printf("\n");
	}
	return 0;
}
