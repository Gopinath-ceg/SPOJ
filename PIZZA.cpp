#include<iostream>
using namespace std;
int main()
{
	int t,s1,s2,s3;
	char str[10];
	cin>>t;
	s1=0;
	s2=0;
	s3=0;
	while(t--)
	{
		cin>>str;
		if(str[0]=='3')
			s3++;
		else if(str[2]=='2')
			s2++;
		else
			s1++;
	}
	t=s3;
	s1=s1-s3;
	t+=s2/2;
	s2=s2%2;
	if(s2)
	{
		t++;
		s1-=2;
	}
	if(s1>0)
	{
		t+=s1/4;
		s1=s1%4;
	}
	if(s1>0)
		t++;
	t++;
	cout<<t<<endl;
	return 0;
}
