#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,len,k,a,b,x,t;
	char str[210],str1[210];
	cin>>n;
	while(n)
	{
		
		cin>>str;
		len=strlen(str);
		k=0;
		x=0;
		b=1;
		a=n*2-1;
		while(a>0)
		{
			t=x++;
			str1[k++]=str[t];
			while(t+a<len || t+a+b<len ) {
			if(t+a<len)
			{
				t=t+a;
				str1[k++]=str[t];
			}
			if(t+b<len)
			{
				t=t+b;
				str1[k++]=str[t];
			} }
			a-=2;
			b+=2;
		}
		str1[len]='\0';
		cout<<str1<<endl;
		cin>>n;
	} //ticghkshifiotnus
	return 0;
}
