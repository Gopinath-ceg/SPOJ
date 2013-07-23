#include<iostream>
using namespace std;
main()
{
	char str[100],s1,s2,s3;
	int t,n,flag,a[8];
	cin>>t;
	while(t--)
	{
		for(int i=0;i<8;i++)
			a[i]=0;
		cin>>n;
		cin>>str;
		s1=str[0];
		s2=str[1];
		if(s1=='T')
			flag=0;
		else
			flag=2;
		if(s2=='T')
			flag+=1;
		else
			flag+=2;
		for(int i=2;i<40;i++)
		{
			s3=str[i];
			flag*=2;
			if(s3=='T')
				flag-=1;
			a[flag-1]++;
			if(flag>4)
				flag-=4;
		}
		cout<<n;
		for(int i=0;i<8;i++)
			cout<<" "<<a[i];
		cout<<endl;
	}
	return 0;
}
