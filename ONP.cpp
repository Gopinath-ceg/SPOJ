#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#define emptytos -1
#define element char
using namespace std;
struct stack
{
	public:
	unsigned int size;
	int top;
	element *p;
};
stack * create(unsigned int maxelements)
{
	stack *s=new stack;
	s->size=maxelements;
	s->top=emptytos;
	s->p=new element[maxelements];
	return s;
}
void pop(stack *s)
{
	s->top--;
}
element topandpop(stack *s)
{
		return(s->p[s->top--]);
}
element top(stack *s)
{
	return(s->p[s->top]);
}
void push(stack *s,element x)
{
	s->p[++s->top]=x;
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
	stack *s=create(strlen(infix));
	infix[strlen(infix)+1]='\0';
	infix[strlen(infix)]=')';
	push(s,'(');
	for(i=0;i<strlen(infix);i++)
	{
		if(isop(infix[i])==0)
			postfix[j++]=infix[i];
		else
		{
			if(infix[i]=='(')
				push(s,infix[i]);
			else if(infix[i]==')')
			{
				while(top(s)!='(')
					postfix[j++]=topandpop(s);
				pop(s);
			}
			else
			{
				if(precd(infix[i])>precd(top(s)))
					push(s,infix[i]);
				else
				{
					while(precd(infix[i])<=precd(top(s)))
						postfix[j++]=topandpop(s);
					push(s,infix[i]);
				}
			}
		}
	}
	postfix[j]='\0';
}
int main()
{
	char *infix,*postfix=NULL;
	int t;
	cin>>t;
	while(t--) {
	cin>>infix;
	convert(infix,postfix);
	cout<<postfix<<endl;
	}
	return 0;
}
