#include<stdio.h>
int main()
{
int n1,n2;
 int i,count=1;
 scanf("%d%d",&n1,&n2);
 for(i=n1;i<=n2;i++)
 {
 if(i%3!=0 && count%5!=0)  //count来计数，当能被5整除的时候就换行
 {
 count++;
 printf("%d ",i);
 continue;
 }
if(i%3!=0 && count%5==0)
{
 count++;
 printf("%d\n",i);
 continue;
 }
}
 return 0;
}
