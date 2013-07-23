#include<iostream>
using namespace std;
unsigned zeroCount(unsigned long long k)
{
    unsigned zeros = 0;
    while(k) {
        zeros += (k % 10) == 0;
        k /= 10;
    }
    return zeros;
}
unsigned long long Z(unsigned long long n)
{
    if (n == 0) {
        return 0;
    }
    if (n <= 10) {
        return 1;
    }
    unsigned long long k = n/10, r = n%10;
    unsigned long long zeros = k + 10*(Z(k)-1);
    if (r > 0) {
        zeros += r*zeroCount(k) + 1;
    }
    return zeros;
}
unsigned long long ze(unsigned long long low, unsigned long long high)
{
    return Z(high+1) - Z(low); 
}
int main()
{
	unsigned long long high,low;
	int t;
	cin>>t;
	while(t--)
	{
              cin>>low;
              cin>>high;
              cout<<ze(low,high)<<endl;
 }
 return 0;
}
