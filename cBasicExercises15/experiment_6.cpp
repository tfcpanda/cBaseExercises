#include<stdio.h>
/*
	有n个评委，给体操运动员打分（10分制），运动员得分结果为去掉一个最高分，
	去掉一个最低分，然后在求平均值即为运动员的得分
*/
int main()
{
	int n=0; 
	scanf("%d\n",&n);
	float a[n];	
	for(int i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	
	
	//找出最大值的下标
	int max = a[0] ,k=0;
	for(int i=0;i<n;i++)
	{
	 if(a[k]<a[i])
		 k=i;
	}
    //找小值的下标 
	int min = a[0];
	int j=0;
	for(int i=0;i<n;i++)
	{
	 if(a[j]>a[i])
		 j=i;
	}
	
	a[k] =0;
	a[j] =0;
	float sum =0,avg =0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	if(n<=2)
	{
		printf("评委人数不够");
	} 
	else
	{
		avg = sum/(n-2);
		printf("%.2f\n",avg);
	} 
		
	
	
	
}