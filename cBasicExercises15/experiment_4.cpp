#include<stdio.h>
#include <stdlib.h>
int main()
{
	int a[10]={0}; 
	for(int i = 0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	int min = abs(a[0]);
	for(int i = 1;i<10;i++)
	{
		if(abs(a[i])<min)
		{
			min = abs(a[i]);
		}
	}
	int key = 0;
	for(int i = 0;i<10;i++)
	{
		if(a[i]==min)
		{
			key = i;
		}
	}
	
	int temp = 0;
	temp = a[9];
	a[9]=a[key];
	a[key] = temp;
	
	for(int i = 0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	
}