#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t;
	int n,m,r,c;
	scanf("%d",&t);
	while(t--)
	{
		cin>>m>>n;
		cin>>r>>c;
		for(int i=0;i<m;i++)
		{
			for(int a=0;a<r;a++)
			{
				for(int j=0;j<n;)
				{
					if(i%2==0)
					{
						j++;
						for(int k=0;k<c;k++)
							printf("X");
						if(j<n)
						for(int k=0;k<c;k++)
							printf(".");
						j++;
					}
					else
					{
						j++;
						for(int k=0;k<c;k++)
							printf(".");
						if(j<n)
						for(int k=0;k<c;k++)
							printf("X");
						j++;
					}
				}
				printf("\n");
			}
		}
	}
	return 0;
}
