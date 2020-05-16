#include<stdio.h>
int main()
{
	int a[6],b[8],c[99]={0};
		
	//读取数组 
	for(int i =0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	//读取数组 
	for(int i =0;i<8;i++)
	{
		scanf("%d",&b[i]);
	}
	/*
	 * 寻找两个数组中相同的数字，并把它放进c数组中去 
	 */ 
	int k=0;
	for(int i =0;i<6;i++)
	{
		for(int j =0;j<8;j++)
		{
			if(a[i]==b[j])
			{
				for(;k<99;)
				{
					c[k] = a[i];
					k++;
					break;
				}
			
			}
		}
	}
	/*
	 * 立一个flag，如果数组c全为0 flag为1 输出no 
	 * 如果有数字的，flag为0  foreach输出数组 
	 */
	 
	
	int flag = 0;
	for(int i =0;i<99;i++)
	{
		if(c[i]==0)
		{
			flag=1;
		}
		else
		{
			flag = 0;
			break;
		}
	
		
	} 
	
	if(flag ==1)
	{
	
		printf("no");
		
	}
	
	if(flag ==0)
	{
		for(int i =0;i<99;i++)
	{
		
	if(c[i]==0)
		{
			continue;	
		} 
		else
		{
			printf("%d\n",c[i]);
		}	
	}
	}
	
	
		
}