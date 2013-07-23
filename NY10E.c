#include <stdio.h>
void step(long long int *arr)                                           
{
	int i;
    for (i = 1; i < 10; i++)
    	arr[i] += arr[i-1];
}
int main(void)
{
    int t;
    int x, y;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &x, &y);
        y--;
        long long int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        while (y--)
        	step(arr);
        printf("%d %lld\n", x, arr[9]);
    }
    return 0;
}
