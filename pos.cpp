#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct stack
{
	int size;
	int top;
	char* p;
};
struct stack * create(int maxelements)
{
	struct stack *s=(struct stack*)malloc(sizeof(struct stack));
	s->size=maxelements;
	s->top=-1;
	s->p=(char *)malloc(maxelements*sizeof(char));
	return s;
}
bool isfull(stack *s)
{
	return (s->top==s->size-1);
}
bool isempty(stack *s)
{
	return(s->top==-1);
}
void push(struct stack*s,char c)
{
     if(!(isfull(s)))
       s->p[++s->top]=c;
}
char topnpop(struct stack* s)
{
     if(!(isempty(s)))
                      return(s->p[s->top--]);
}
void pop(struct stack* s)
{
     if(!(isempty(s)))
                      s->top--;
}
char top(struct stack*s)
{
     return(s->p[s->top]);
}
int prio(char c)
{
    if(c=='+' || c=='-')
              return 1;
    else if(c=='*' || c=='/')
         return 2;
    else if(c=='^')
         return 3;
    else
        return 0;
}
bool isop(char c)
{
    if(c=='+' || c=='-' ||c=='*'||c=='/'||c=='^')
              return 1;
    else
        return 0;
}
void post(char in[],int n)
{
      char po[400];
      int j,k=0;
      struct stack*s=create(n);
      for(j=0;j<n;j++)
      {
                      if(in[j]=='(')
                                    push(s,in[j]);       
                      else if(in[j]==')')
                      {
                           while(top(s)!='(')
                                             po[k++]=topnpop(s);
                           pop(s);
                      }
                      else if(!(isop(in[j])))
                           po[k++]=in[j];
                      else
                      {
                          if(prio(in[j])>prio(top(s)))
                                                      push(s,in[j]);
                          else
                          {
                              while(prio(in[j])<=prio(top(s)))
                                                              po[k++]=topnpop(s);
                              push(s,in[j]);
                          }
                      }
      }
      po[j]='\0';
      cout<<po<<endl;
}
int main()
{
    int t;
    char in[400];
    cin>>t;
    while(t--)
    {
              cin>>in;
              post(in,strlen(in));
    }
    getch();
    return 0;
}
