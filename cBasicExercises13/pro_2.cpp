#include"stdio.h"
/*
	����һ�����ݣ�n����n�Ӽ�������n<=100��������ƽ��ֵ��������λС����
*/
main()
{
 int i,n = 0,max = 0;
 float sum=0;
 float ave =0;
 scanf("%d",&n);
 int a[n]; 
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  sum=sum+a[i];
 }
 ave=sum/n;
 
 for(i=0;i<n;i++)
 {
  if(a[i]>max)
   max =a[i];
 }
  printf("%d\n",max);
 printf("%.2f\n",ave);

}