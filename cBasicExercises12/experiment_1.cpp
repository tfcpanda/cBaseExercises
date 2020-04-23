#include<stdio.h>
int sum(int n);
main()
{
    int n,r=0;
    scanf("%d",&n);
    r = sum(n);
    printf("%d\n",r);

}

int sum(int n)
{
	int sum = 0;
	for(int i = 1;i<=n;i++)
	{
		sum += i;	
	}
	return sum;
}