#include<stdio.h>
void inputdata(int a[],int n);
int main()
{
	int n, a[99] = {0}, flag = 0, p;
	
	scanf("%d", &n);
	
	
	/*��ȡ��Ӧ�±������*/
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &p);
		 a[p]++;
	}
	
	/*�������2����ʾ�ظ�����ӡ���*/ 
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


