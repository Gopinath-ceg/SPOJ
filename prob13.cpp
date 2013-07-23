#include<iostream>
using namespace std;
int main()
{
	long long int a,b,t,i,n,n1,c,d,result,result1;
	cin>>t;
	while(t--)
	{
              cin>>n1;
              cin>>n;
              result = 0;
              i = 1;
              a=1;
              while(a)
              {
                      b=n/i;
                      c =n%i;
                      a=b/10;
                      b=b%10;
                      if(a==0)
                              break;
                      if (b == 0)
                                  result += (a - 1) * i + c + 1;
                      else
                                  result += a * i;
                      i*= 10;
              }
              a=1;
              result1 = 0;
              i = 1;
              while(a)
              {
                      b=n1/i;
                      c =n1%i;
                      a=b/10;
                      b=b%10;
                      if(a==0)
                              break;
                      if (b == 0)
                                  result1 += (a - 1) * i + c + 1;
                      else
                                  result1 += a * i;
                      i*= 10;
              }
              cout<<result-result1<<endl;
        }
        return 0;
}
