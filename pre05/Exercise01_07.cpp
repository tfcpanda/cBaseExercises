/************************
* �ļ���: Exercise01_07
* ���ܣ�����Ҫ������������������n���󷽳�x2+y2=n��������������
* ����: TFC 
* ����: 2020-05-13 
************************/
#include<stdio.h>
#include<math.h>
int main()
{
	int n, SoluX, SoluY, Left, flag = 0;
	scanf("%d", &n);
	
	/*ѭ��ȫ������*/
	for(int i = 1; i<n; i++)
	{
		SoluX = i*i;
		Left = n - SoluX;
		/*������֣��ֳ�����*/
		for(int j = 1; j < Left; j++)
		{
			if((j*j == Left) && (i<=j) )
			{	
					printf("%d %d\n", i, j);
					flag = 1;
			}
		}
		
	}
	
	if(flag == 0)
	{
		printf("No Solution");
	}
}