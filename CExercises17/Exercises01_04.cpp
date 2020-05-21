#include<stdio.h>
void inputdata(int a[],int n);
int main()
{
	int n, a[99] = {0}, flag = 0, p;
	
	scanf("%d", &n);
	
	
	/*读取对应下标的数字*/
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &p);
		 a[p]++;
	}
	
	/*如果大于2，表示重复，打印输出*/ 
	for(int j = n; j >= 1; j--)
	{
		if(a[j] >= 2)
		{
			printf("%d ",j);
			flag = 1;	
		}
	} 
	
	if(flag==0)
	{
		printf("-1"); 
	}
	
}


