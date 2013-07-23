#include<iostream>
#include<string.h>
using namespace std;
void srev(char *a,char *b)
{
	int i;
	for(i=0;b[i]!='\0';i++)
		a[i]=b[strlen(b)-i-1];
	a[i]='\0';
}
int main()
{
	int t;
	char s[15],s1[15];
	cin>>t;
	while(t--)
	{
		cin>>s;
		srev(s1,s);
		if(strcmp(s,s1)==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}


