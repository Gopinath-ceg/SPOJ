#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
	int t;
	char str[20];
	unsigned int n,k,c;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int *a=new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>str;
			a[i]=strlen(str);
		}
		c=0;
		for(unsigned int i=0;i<n-1;i++)
			for(unsigned int j=i+1;(j-i<=k)&&(j<n);j++)
				if(a[i]==a[j])
					c++;
		cout<<c<<endl;
	}
	return 0;
}
