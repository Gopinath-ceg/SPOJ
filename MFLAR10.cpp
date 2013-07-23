#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
	char str[2000],s;
	bool flag;
	int n,i;
	while(1)
	{
		gets(str);
		if(str[0]=='*')
			break;
		if(str[0]!=' ')
			continue;
		s=toupper(str[0]);
		flag=true;
		for(i=1;str[i]!='\0';i++)
			if(str[i] == ' ' && toupper(str[i+1])!=s)
			{
				flag=false;
				break;
			}
		if(flag)
			cout<<"Y"<<endl;
		else
			cout<<"N"<<endl; 
	}
	return 0;
}
