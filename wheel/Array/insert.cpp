#include "stdio.h"
int main()
{
	int a[10],n,i;
	int k,x,t;	
	printf("请输入n个有序数，0表示结束\n");
	for(n=0;;n++)
	{
		scanf("%d",&a[n]);
		if(a[n]==0)
		      break;
	}
	
	printf("请输入要插入的数字：");
	scanf("%d",&x);
	for(k=0;k<n;k++)
	{
		//找到第一个>=insert_num的元素位置 
		if(a[k]>=x)
		      break;
		
	}
	for(i=n-1;i>=k;i--)
	{
		a[i+1]=a[i];
	}	 
	a[k]=x;
	for(i=0;i<=n;i++)
		printf("%5d",a[i]);
}
