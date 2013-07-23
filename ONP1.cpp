#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
struct stack
{
	unsigned int size;
	int top;
	char *p;
}s;
void create( int max)
{
	s.size=max;
	s.top=-1;
	s.p=new char[max];
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
int precd (char symbol)
{
	switch(symbol)
	{
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '^':
			return 3;
		default :
			return 0;
	}
}
int isop(char symbol)
{
	switch(symbol)
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '^':
		case '(':
		case ')':
			return 1;
		default :
			return 0;
	}
}
void convert(char *infix,char *postfix)
{
	int i,j=0;
	create(strlen(infix));
	infix[strlen(infix)+1]='\0';
	infix[strlen(infix)]=')';
	push('(');
	for(i=0;i<strlen(infix);i++)
	{
		if(isop(infix[i])==0)
			postfix[j++]=infix[i];
		else
		{
			if(infix[i]=='(')
				push(infix[i]);
			else if(infix[i]==')')
			{
				while(top()!='(')
					postfix[j++]=topandpop();
				pop();
			}
			else
			{
				if(precd(infix[i])>precd(top()))
					push(infix[i]);
				else
				{
					while(precd(infix[i])<=precd(top()))
						postfix[j++]=topandpop();
					push(infix[i]);
				}
			}
		}
	}
	postfix[j]='\0';
} 
int main()
{
	char infix[400],postfix[400];
	int t;
	cin>>t;
	while(t--) {
	cin>>infix;
	convert(infix,postfix);
	cout<<postfix<<endl;
	delete(s.p);
	}
	return 0;
}
