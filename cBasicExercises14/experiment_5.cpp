#include<stdio.h>

int main()
{
	int n,sum = 0;
	scanf("%d",&n);
	int i,m[n]; 
	m[0]=1;
	m[1]=1;
	for(i=2;i<n;i++) 
	{ 
	m[i]=m[i-1]+m[i-2];
	}
	for(i=0;i<n;i++)
	{
		sum +=m[i]; 
	}

	printf("%d",sum);
	
}