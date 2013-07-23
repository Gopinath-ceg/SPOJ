#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,a;
	char s[90];
	cin>>n;
	for(int j=1;j<=n;j++)
	{
		cin>>a>>s;
		for(int i=a-1;i<strlen(s);i++)
			s[i]=s[i+1];
		cout<<j<<" "<<s<<endl;
	}
	return 0;
}
