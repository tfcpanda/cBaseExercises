#include<stdio.h>
/*
	����10�����������ǵ�ƽ��ֵ�����������ƽ��ֵ�����ݵĸ�����
*/
int main()
{
	int a[10]={0},sum =0,avg=0,n=0;
	for(int i = 0;i<10;i++)
	{
		scanf("%d",&a[i]) ;
	} 
	
	for(int i = 0; i<10; i++)
	{
		sum += a[i];
	} 
	avg = sum/10;
	for(int i = 0; i<10; i++)
	{
		if(a[i]>avg)
		{
			n++;
		}
	} 
	
	printf("%d",n);
}