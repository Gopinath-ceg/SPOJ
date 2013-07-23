#include<iostream>
#include<math.h>
using namespace std;
main()
{
	char x,y,n;
	long int num;
	while(1)
	{
		cin>>x>>y>>n;
		cin>>n;
		if(x=='0' && y=='0')
			break;
		num=int(x-48)*10+int(y-48);
		num*=pow(10,int(n-48));
		cout<<int(2*(num - pow(2,(int(log2(num))))))+1<<endl;
	}
	return 0;
}
