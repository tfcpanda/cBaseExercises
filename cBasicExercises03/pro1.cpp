#include<stdio.h>
main()
{
   int a,sing,ten,hun,sum;                           
   scanf("%d",&a);     
   	 sing = a%10;
   	 ten  = a/10%10;
   	 hun  = a/10/10%10;
   	 sum = sing+ten+hun;                                                
   printf("%d",sum); 
   
}