#include<stdio.h>
int main(){
	int i = 0;
	int j = 0;
	int k = 0;
	int num;
	scanf("%d",&num);
	for (i = 1; i <= num; i++)//�������� 
	{
		for (j = 0; j < num - i; j++)//ѭ������ո� 
		{
			printf(" "); 
		}
		for (k = 0; k < 2 * i - 1; k++)//ѭ���������* 
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = num-1; i >0; i--)
	{
		for (j = 0; j < num - i; j++)
		{
			printf(" ");
		}
		for (k = 0; k < 2 * i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}