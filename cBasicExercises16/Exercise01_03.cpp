#include<stdio.h>
#define SIZE 10
int main()
{
	int a[SIZE],n,i,j,k,m;
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
		a[i+6]=a[i];
	}	
	for(i=0;i<6;i++)		
	{
		for(j=0;j<6;j++)
		printf("%d ",a[i+j]);
		printf("\n");
	}	
	return 0;
}