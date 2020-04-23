#include<stdio.h>
main()
{
   int a,sing,ten,hun,thou,mil,sum;                           
   scanf("%d",&a);     
   if(a>0){
   	 sing = a%10;
   	 ten  = a/10%10;
   	 hun  = a/10/10%10;
   	 thou = a/10/10/10%10;
   	 mil  = a/10/10/10/10%10;
   	 sum = sing+ten+hun+thou+mil;
   }                                                  
   printf("%d",sum); 
}
