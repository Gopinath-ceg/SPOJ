#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<alloc.h>
#include<math.h>
#define minsize 5
#define emptytos -1
#define element char
typedef struct stack
{
	unsigned int size;
	int top;
	element *p;
};
stack * create(unsigned int maxelements)
{
    /*	if(maxelements<minsize)
	{
		printf("\nSize of stack is too small");
		return NULL;
	}       */
	stack *s=(stack*)malloc(sizeof(stack));
	s->size=maxelements;
	s->top=emptytos;
	s->p=(element *)malloc(maxelements*sizeof(element));
	return s;
}
int isfull(stack *s)
{
	return (s->top==s->size);
}
int isempty(stack *s)
{
	return(s->top==emptytos);
}
void pop(stack *s)
{
	if(isempty(s))
		printf("\nStack is empty");
	else
		s->top--;
}
element topandpop(stack *s)
{
	if(isempty(s))
	{
		printf("\nStack is empty");
		return 0;
	}
	else
		return(s->p[s->top--]);
}
element top(stack *s)
{
	if(isempty(s))
	{
		printf("\nStack is empty");
		return 0;
	}
	else
		return(s->p[s->top]);
}
void push(stack *s,element x)
{
	if(isfull(s))
	{
		printf("stack is full");
		return;
	}
	s->p[++s->top]=x;
}
void make_empty(stack *s)
{
	s->top=emptytos;
}
void dispose(stack *s)
{
	free(s->p);
	free(s);
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
		case '%':
			return 3;
		case '^':
			return 4;
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
		case '%':
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
	postfix[j]=NULL;
}
void main()
{
	char infix[20],postfix[20];
	clrscr();
	printf("Enter a valid infix expression:");
	gets(infix);
	convert(infix,postfix);
	printf("The corresponding postfix expression is\n%s",postfix);
	getch();
}
