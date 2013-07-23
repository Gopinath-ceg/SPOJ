#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char a[1000];
	int n,c,t=0;
	while(1)
	{
		if(scanf("%c",&a[0])==EOF)
			break;
		if(!(a[0]=='0' || a[0]=='1'))
			break;
		n=1;
		while(1)
		{
			scanf("%c",&a[n]);
			if(!(a[n]=='0' || a[n]=='1'))
				break;
			n++;
		}
		c=0;
		for(int i=0;i<n;i++)
			if(a[i]=='1')
			{
				c++;
				for(int j=i;j<n;j++)
					if(a[j]=='1')
						a[j]='0';
					else
						a[j]='1';
			}
		cout<<"Game #"<<++t<<": "<<c<<endl;
	}
	return 0;
}
