#include<stdio.h>
main()
{
   int a,b,quo,rem;                       
   scanf("%d",&a);                       
   scanf("%d",&b);                                                    
   quo=a/b;
   rem=a-(b*quo);
   printf("%d ",quo);       
   printf("%d\n",rem);    
}