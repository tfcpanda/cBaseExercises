#include<stdio.h>
main()
{
   int a,b,c,sum,sub,mul,div,rem;                           
   scanf("%d %d",&a,&b);                               
   sum=a+b;
   sub = a-b;
   mul=a*b;
   div=a/b; 
    rem = a%b;                         
   printf("(%d)\n",sum); 
    printf("(%d)\n",sub); 
     printf("(%d)\n",mul); 
      printf("(%d,%d)\n",div,rem); 
}
