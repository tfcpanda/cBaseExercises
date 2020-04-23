#include<stdio.h>
main()
{
   int n,secend,leftsec,min,leftmin,hour;                           
   scanf("%d",&n);     
   if(n<86400&&n>=0){
   	scanf("d%",n);
   	leftsec = n%60;
	min = n/60;
	hour = min/60;
	leftmin = min%60; 
   }                                                  
   printf("%d:%d:%d",hour,leftmin,leftsec); 
}
