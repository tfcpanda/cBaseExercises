#include"stdio.h"
/*
	��������Ȳ����к͵ĳ����д�����֪���е�һ���ֵa0���Ȳ�ֵk�������е�����n��������֮��
*/
int sum(int a0,int k,int n);
main()
{
 int a0,k,n;
 int r;
 scanf("%d%d%d",&a0,&k,&n);
 r=sum(a0,k,n);
 printf("%d",r);
 
} 

int sum(int a0,int k,int n)
{
 int s=0;
 int i,t;
 t = a0;
 for(i=1;i<n;i++)
 {
   t=t+k;
   a0=a0+t; 
 }
 
 return a0;
}