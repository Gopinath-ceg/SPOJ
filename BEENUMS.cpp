#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long unsigned int n;
	int i,j;
	while(1)
	{
		cin>>n;
		if(n==-1)
			break;
		else
		{
			if(n==1)
			{
				cout<<"Y"<<endl;
				continue;
			}				
			n--;
			if(n%3!=0)
			{
				cout<<"N"<<endl;
				continue;
			}				
			n/=3;
			i=sqrt(n);
			if(n==i*(i+1))
				cout<<"Y"<<endl;
			else
				cout<<"N"<<endl;
		}
	}
	return 0;
}
