#include<stdio.h>
#define SIZE 50
int main()
{    
	int a[SIZE]={0},n;
	scanf("%d",&n);
	int max = 0,num = 0;
	for(int i = 0;i<n;i++)    //�����ִ������ 
	{
		 scanf("%d",&a[i]);
	}
	
	for(int i = 0;i<n;i++)   //�ҳ��������� 
	{
		if(a[i]>max)
		{
			max = a[i];	
		} 
	}
	
	for(int i =0 ;i<n;i++)   //�ҳ�������ֵ��±� 
	{
		if(a[i] == max){
			num = i;
		}
	}
	printf("max number is %d\n",max);
	printf("max number pos is %d",num);
	
}