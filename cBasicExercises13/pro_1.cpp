#include"stdio.h"
/*
	统计一班级学生某次考试的成绩信息（班级人数n从键盘输入,n不大于100），
	得出该班级的平均成绩，以及高于平均分和低于平均分的人数及其比例（保留2位小数）
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