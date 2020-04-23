#include <stdio.h>
int main(void)
{
    int y,x,z,sum;
    scanf("%d/%d/%d",&y,&x,&z);
    if((y%4==0&&y%100!=0)||y%400==0){
		switch(x)
   {  
      case 01:
      		sum = z;
          printf("%d",sum);
          break;
      case 02:
      		sum = 31+z;
          printf("%d",sum);
          break;
      case 03:
      sum = 31+29+z;
          printf("%d",sum);
          break;
      case 04:
       sum = 31+29+31+z;
          printf("%d",sum);
          break;
      case 05:
      sum = 31+29+31+30+z;
          printf("%d",sum);
          break;
      case 06:
       sum = 31+29+31+30+31+z;
          printf("Friday");
          break;
      case 07:
      sum = 31+29+31+30+31+30+z;
          printf("%d",sum);
          break;
      
       case 8:
       sum = 31+29+31+30+31+30+31+z;
          printf("%d",sum);
          break;
      case 9:
      sum = 31+29+31+30+31+30+31+31+z;
          printf("%d",sum);
          break;	
      case 10:
       sum = 31+29+31+30+31+30+31+31+30+z;
          printf("%d",sum);
          break;
      case 11:
      sum = 31+29+31+30+31+30+31+31+30+31+z;
          printf("%d",sum);
          break;
      case 12:
      sum = 31+29+31+30+31+30+31+31+30+31+30+z;
          printf("%d",sum);
          break;		  		  		  	  		  		  		            
      default :
          printf("输入运算符有误！");

    }
    }
    else
    {
    		switch(x)
   {  
      case 01:
      		sum = z;
          printf("%d",sum);
          break;
      case 02:
      		sum = 31+z;
          printf("%d",sum);
          break;
      case 03:
      sum = 31+28+z;
          printf("%d",sum);
          break;
      case 04:
       sum = 31+28+31+z;
          printf("%d",sum);
          break;
      case 05:
      sum = 31+28+31+30+z;
          printf("%d",sum);
          break;
      case 06:
       sum = 31+28+31+30+31+z;
          printf("Friday");
          break;
      case 07:
      sum = 31+28+31+30+31+30+z;
          printf("%d",sum);
          break;
      
       case 8:
       sum = 31+29+31+30+31+30+31+z;
          printf("%d",sum);
          break;
      case 9:
      sum = 31+28+31+30+31+30+31+31+z;
          printf("%d",sum);
          break;	
      case 10:
       sum = 31+28+31+30+31+30+31+31+30+z;
          printf("%d",sum);
          break;
      case 11:
      sum = 31+28+31+30+31+30+31+31+30+31+z;
          printf("%d",sum);
          break;
      case 12:
      sum = 31+28+31+30+31+30+31+31+30+31+30+z;
          printf("%d",sum);
          break;		  		  		  	  		  		  		            
      default :
          printf("输入运算符有误！");

    }
    	
    }
}