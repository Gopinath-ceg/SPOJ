#include<iostream>
#include<string>
#include<list>
#include<conio.h>
using namespace std;
class node
{
      public :
        string s;
        int a,b,c;
bool operator < (const node& x)
{
    if(a>x.a)
             return 1;
    else if(a==x.a)
    {
         if(b>x.b)
                  return 1;
         else if(b==x.b)
         {
              if(c<x.c)
                       return 1;
              else if(c==x.c)
              {
                   if(s<x.s)
                            return 1;
              }
         }
    }
    return 0;
}
};
int main()
{
    long int n;
    cin>>n;
    list<node> my;
    node *t=new node;
    for(int i=0;i<n;i++)
    {
            cin>>t->s;
            cin>>t->a;
            cin>>t->b;
            cin>>t->c;
            my.push_back(*t);
    }
    my.sort();
    for(list<node>::const_iterator f=my.begin();f!=my.end();f++)
            cout<<f->s<<'\n'; 
    getch();
    return 0;
}
