#include<stdio.h>
int main()
{
	int a[6],b[8],c[99]={0};
		
	//��ȡ���� 
	for(int i =0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	//��ȡ���� 
	for(int i =0;i<8;i++)
	{
		scanf("%d",&b[i]);
	}
	/*
	 * Ѱ��������������ͬ�����֣��������Ž�c������ȥ 
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
	 * ��һ��flag���������cȫΪ0 flagΪ1 ���no 
	 * ��������ֵģ�flagΪ0  foreach������� 
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