#include<stdio.h>

int  main()
{
	int n, a[99], m = 0;
	scanf("%d", &n);
	for(int i = 0;i < 99; i++)
	{
			
		a[i] = n%8;
		m++;
		n = n/8;
		if(n == 0)
		{
			break;
		}	
	}
	
	for(int j = m-1; j >= 0; j--)
	{
		printf("%d", a[j]);
	} 
}