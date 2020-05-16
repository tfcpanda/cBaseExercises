#include<stdio.h>
/*
	输入一组数据（不超过20个），存入数组中，并找出最小值及其所在的下标
*/
int main()
{
	int a[20] ={0};
	for(int i = 0;i<20;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==-1)
		{
			break;
		} 
	}
	int min = a[0];
	for(int i =1;i<20;i++)
	{
		if(a[i]>0)
		{
			if(a[i]<min)
		{
			min = a[i];
		}
		}
		else
		{
			break;
		}
		
	}
	int key = 0;
	for(int i =0;i<20;i++)
	{
		if(a[i]==min)
		{
			key =i;
		}
	}
	
	printf("%d %d",min,key);
	
}