#include<stdio.h>
/*	
��15������һά���飬����ĳ��x�Ƿ��ڸ������д���

��ʾ���ӵ�һ�������һ������Ƚ�

for() // �ӵ�һ���Ƚϵ����һ��

������ �����±�ֵ����break

���µ��±�ֵ��Ϊ���н��
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