#include<iostream>
using namespace std;
int main()
{
	int t,i,j;
	int flag,r1,c1,r2,c2;
	char a[8][8];
	cin>>t;
	while(t--)
	{
		flag=0;
		for(i=0;i<8;i++)
		{
			for(j=0;j<8;j++)
			{
				cin>a[i][j];
				if(a[i][j]=='B')
					if(flag==0)
					{
						r1=i;
						c1=j;
						flag=1;
					}
					else
					{
						r2=i;
						c2=j;
						break;
					}
			}
		}
		if(r1+c2==r2+c1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	cin>>t;
	return 0;
}
