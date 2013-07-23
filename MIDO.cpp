#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,m,t,s,s1,t1,t2,s2,last;
	s2=0;
	s1=0;
	t1=0;
	t2=0;
	cin>>n;
	while(n--)
	{
		scanf("%d %d:%d",&t,&m,&s);
		s+=m*60;
		if(t1>t2)
			s1+=s-last;
		if(t1<t2)
			s2+=s-last;
		if(t==1)
			t1++;
		else
			t2++;
		last=s;
	}
	s=48*60;
	if(t1>t2)
		s1+=s-last;
	if(t1<t2)
		s2+=s-last;
	printf("%02d:%02d\n", s1/60, s1%60);
	printf("%02d:%02d\n", s2/60, s2%60);
	return 0;
}
