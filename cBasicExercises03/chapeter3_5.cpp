#include<stdio.h>
main()
{
   int n,secend,leftsec,min,leftmin,hour,hours;                           
   scanf("%d",&n);     
   if(n<86400&&n>=0){
   	scanf("d%",n);
   	leftsec = n%60;
	min = n/60;
	hour = min/60;
	leftmin = min%60; 
   }                                                  
   printf("%02d:%02d:%02d",hour,leftmin,leftsec); 
}
