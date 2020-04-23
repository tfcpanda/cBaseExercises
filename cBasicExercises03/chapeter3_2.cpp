/*#include <stdio.h>
main()
{  
    int x,a,b,c;
  
    scanf("%x",&x);     
 	 a  = x%10;
   	 b  = x/10%10;
   	 c  = x/10/10%10;
    printf("%d,%d,%d",a,b,c);
    return 0;
}   */

#include<stdio.h>
main()
{
   int a,sing,ten,hun,sum;                           
   scanf("%d",&a);     
   	 sing = a%10;
   	 ten  = a/10%10;
   	 hun  = a/10/10%10;
	
   	 sum = sing*sing+ten*ten+hun*hun;                                              
   printf("%d",sum); 
}
 


