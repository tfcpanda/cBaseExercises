#include"stdio.h"
main()
{
    int x,hour,min,leftmin,leftsec;
    scanf("%d",&x);

   	if(x<86400&&x>=0){
    leftsec = x%60;
	min = x/60;
	hour = min/60;
	leftmin = min%60; 
	   }
		   
	   if(x<43199&&x>=0){
   		    printf("AM %02d:%02d:%02d",hour,leftmin,leftsec);
      	}
      	
		if(x<86399&&x>43200){
			hour= hour-12;
		 printf("PM %02d:%02d:%02d",hour,leftmin,leftsec);
		}
		
			if(x==43200){
			hour= 0;
		 printf("PM %02d:%02d:%02d",hour,leftmin,leftsec);
		}
}

 