#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    while(1)
    {
    	float a;
	double n;
	cin>>n;
	if(n==-1)
		return 0;
	else
		a=sqrt(1+4*((n-1)/3));
	if(a-int(a))
		cout<<"N"<<endl;
	else 
		cout<<"Y"<<endl;

    }
   return 0;
}

