#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,a,b,c;
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		int x[c],y[c];
		for(int i=0;i<c;i++)
			cin>>x[i]>>y[i];
		x[c]=0;
		y[c]=0;
		c++;
		x[c]=a+1;
		y[c++]=b+1;
		sort(x,x+c);
		sort(y,y+c);
		for(int i=0;i<c-1;i++)
		{
			x[i]=x[i+1]-x[i];
			y[i]=y[i+1]-y[i];
		}
		sort(x,x+c-1);
		sort(y,y+c-1);
		cout<<(x[c-2]-1)*(y[c-2]-1)<<endl;
	}
}
		
