#include<cstdio>
#include<string.h>
#include<iostream>
using namespace std;
int c;
struct stack
{
	int top;
	char p[5000];
};
stack s;
int isempty()
{
	return(s.top==-1);
}
void pop()
{
		s.top--;
}
char topandpop()
{
		return(s.p[s.top--]);
}
char top()
{
		return(s.p[s.top]);
}
void push(char x)
{
	s.p[++s.top]=x;
}
void isbal(char *a)
{
	int i=0;
	s.top=-1;
	for(;a[i]!='\0';i++)
	{
		if(a[i]=='{')
			push(a[i]);
		else if(isempty())
		{
			c++;
			push('{');
		}
		else if((a[i]=='}')&&(top()=='{'))
			pop();
	}
	c+=(s.top+1)/2;
}
int main()
{
	char str[5000];
	int i=1;
	while(1)
	{
		scanf("%s",str);
		if(str[0]=='-')
			break;
		c=0;
		isbal(str);
		printf("%d. %d\n",i++,c);
	} 
	return 0;
}
