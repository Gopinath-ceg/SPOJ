#include<stdio.h>
int main()
{
	int n,a,i,b;
	int x[2002]={0},flag;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		for(i=0;i<2002;i++)
			x[i]=0;
		for(i=0;i<a;i++)
		{
			scanf("%d",&b);
			x[1000+b]++;
		}
		flag=0;
		for(i=0;i<2002;i++)
			if(x[i]>a/2)
			{
				flag=1;
				break;
			}
		if(flag)
			printf("YES %d\n",i-1000);
		else
			printf("NO \n");
	}
	return 0;
}
