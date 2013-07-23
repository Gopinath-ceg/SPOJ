#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	char a[600],b[600];
	int c;
	while(1)
	{
		cin>>a>>b;
		if(a[0]=='*')
			break;
		c=0;
		for(int i=0;a[i]!='\0';i++)
			if(a[i]==b[i]);
			else
			{
				i++;
				while(a[i]!='\0')
				{
					if(a[i]!=b[i])
						i++;
					else
						break;
				}
				c++;
				if(a[i]=='\0')
					break;
			}
		cout<<c<<endl;
	}
	return 0;
}
