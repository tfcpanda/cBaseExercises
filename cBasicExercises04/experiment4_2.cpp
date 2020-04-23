#include <stdio.h>
int main(void)
{
   int x,y,z;            

   printf("Enter x:\n");  
   scanf("%d", &x);       
   if(x%10==0)  {
   	   y=x;
       z=x;
   }
   if(x%10!=0)
   	{
   	   y = x*2;            
       z=  x*3;    
   }
   printf("y=%d\nz=%d",y,z); 
}

