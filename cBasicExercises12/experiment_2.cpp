#include <stdio.h>
int sum(int a,int k,int n);
int main()
{
    int a,k,n;
    scanf("%d%d%d",&a,&k,&n);
    printf("%d\n",sum(a,k,n));
    return 0;
}
int sum(int a,int k,int n)
{
	int sum = 0;
	for(int i = 0;i<n;i++)
	{
		sum += a+i*k;
	}
	return sum;
}