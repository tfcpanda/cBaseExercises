#include<stdio.h>
/*	
有15个数的一维数组，查找某数x是否在该数组中存在

提示：从第一个到最后一个逐个比较

for() // 从第一个比较到最后一个

如果相等 记下下标值，并break

记下的下标值即为所有结果
*/
int main()
{
	int a[15] ={0};
	for(int i = 0;i<15;i++)
	{
		scanf("%d",&a[i]);
	}
	int x = 0;
	scanf("%d",&x);
	
	int key = -1;
	for(int i = 0;i<15;i++)
	{
		if(a[i]==x)
		{
			key = i;
		}
	}
	
	if(key==-1)
	{
		printf("NO");
	} 
	else
	{
		printf("%d",key);	
	}
	
	
}