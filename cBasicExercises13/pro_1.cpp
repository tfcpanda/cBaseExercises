#include"stdio.h"
/*
	ͳ��һ�༶ѧ��ĳ�ο��Եĳɼ���Ϣ���༶����n�Ӽ�������,n������100����
	�ó��ð༶��ƽ���ɼ����Լ�����ƽ���ֺ͵���ƽ���ֵ������������������2λС����
*/
main()
{
 int i,n = 0;
 float over_ave=0,below_ave=0,sum=0;
 float ave =0;
 scanf("%d",&n);
 int a[n] ; 
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  sum=sum+a[i];
 }
 ave=sum/n;
 
 for(i=0;i<n;i++)
 {
  if(a[i]>=ave)
   over_ave++;
  else
   below_ave++;
 }
 printf("%.2f\n",ave);
 
 printf("%.2f%%\n%.2f%%\n",over_ave*100/n,below_ave*100/n); 
}