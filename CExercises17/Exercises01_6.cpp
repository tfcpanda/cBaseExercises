#include<stdio.h>

int  main()
{
	int num, n, a[99], m = 0;
	
	scanf("%d %d", &num, &n);
	
	for(int i = 0;i < 99; i++)
	{
		if(num%n > 9)
		{
			a[i] = num%n + 55;
		}
		else
		{
			a[i] = num%n;	
		}
		
		m++;
		num = num/n;
		if(num == 0)
		{
			break;
		}	
	}
	
	
	for(int j = m-1; j >= 0; j--)
	{
		if(a[j] > 9)
		{
			printf("%c",  a[j]);
		}
		else
		{
			printf("%d", a[j]);
		}
		
	
	} 
}